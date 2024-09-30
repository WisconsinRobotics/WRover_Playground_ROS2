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


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(DrivePower, '/robot/drive_power', 10)
        timer_period = 0.01  # seconds

        # Start spinning (stopped by first callback)
        self.power_left = 0.0
        self.power_right = 0.0

        self.ir_array = [math.inf for _ in range(180)] 

        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.subscription = self.create_subscription(
            IRSensorData,
            '/robot/ir_sensor',
            self.listener_callback,
            10)
        
        self.subscription  # prevent unused variable warning




    def timer_callback(self):
        msg = DrivePower()
        msg.left_power = self.power_left # 1.0
        msg.right_power = self.power_right # 1.0 #'{left_power: , right_power: 10}'

        self.publisher_.publish(msg)
        #self.get_logger().info('Publishing: "%s"' % msg)
        self.i += 1

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.distances)
        self.ir_array = msg.distances

        if (self.ir_array[90] == math.inf): # Spin until facing beacon
            self.power_left = -.1
            self.power_right = .1
        else: # Drive straight while facing beacon
            self.power_left = 1.0
            self.power_right = 1.0

        if (self.ir_array[90] == 0): # Stop when at beacon
            self.power_left = 0.0
            self.power_right = 0.0
        





def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
