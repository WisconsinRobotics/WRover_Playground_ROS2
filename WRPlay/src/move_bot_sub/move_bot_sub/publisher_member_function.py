# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node
import math

from custom_msgs_srvs.msg import DrivePower
from custom_msgs_srvs.msg import IRSensorData
from custom_msgs_srvs.srv import ContinuationStatus
from custom_msgs_srvs.srv import LightStatus


class Controller(Node):

    def __init__(self):
        
        self.ir_array = [math.inf for _ in range(180)] 
        self.power_left = 0.0
        self.power_right = 0.0
        self.continue_move = True
        timer_period = 0.01  # seconds
        
    
        super().__init__('minimal_publisher')
        self.drive_publisher = self.create_publisher(DrivePower, '/robot/drive_power', 10)
        self.timer = self.create_timer(timer_period, self.drive_callback)


        self.status_cli = self.create_client(LightStatus, '/robot/status_light')
        while not self.status_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('LightStatus service not available, waiting again...')
        
        self.continue_client = self.create_client(ContinuationStatus, '/robot/continuation')
        while not self.continue_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('ContinuationStatus service not available, waiting again...')
        self.timer = self.create_timer(1.0, self.pull_continuation)

        self.create_subscription(
            IRSensorData,
            '/robot/ir_sensor',
            self.beacon_callback,
            10)
        
        
    def send_light_request(self):
        req = LightStatus.Request()
        req.light_status = 0
        self.future = self.status_cli.call_async(req)
        #rclpy.spin_until_future_complete(self, self.future)


    def pull_continuation(self):
        req = ContinuationStatus.Request()
        future = self.continue_client.call_async(req)
        
        def handle_response(future):
            # Find next beacon when notified
            if future.result().can_continue:
                self.continue_move = True

        future.add_done_callback(handle_response)


    def drive_callback(self):
        msg = DrivePower()
        msg.left_power = self.power_left # 1.0
        msg.right_power = self.power_right # 1.0 #'{left_power: , right_power: 10}'

        self.drive_publisher.publish(msg)
        #self.get_logger().info('Publishing: "%s"' % msg)

    def beacon_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.distances)
        self.ir_array = msg.distances

        if (not self.continue_move or any(distance < 100 for distance in self.ir_array)): # Stop when near beacon
            self.power_left = 0.0
            self.power_right = 0.0
            self.continue_move = False
            self.get_logger().info("HERE")
            self.send_light_request()

        elif (self.ir_array[90] == math.inf): # Spin until facing beacon
            self.power_left = -.1
            self.power_right = .1
        else: # Drive straight while facing beacon
            self.power_left = 1.0
            self.power_right = 1.0




def main(args=None):
    rclpy.init(args=args)

    controller = Controller()

    rclpy.spin(controller)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
