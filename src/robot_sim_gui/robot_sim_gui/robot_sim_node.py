import math
import threading
from copy import deepcopy

from rclpy.node import Node

from robot_sim_gui.robot_sim_canvas import RobotSimCanvas

from robot_sim_interfaces.msg import DrivePower, IRSensorData
from robot_sim_interfaces.srv import (ContinueStatus, ContinueStatus_Response,
                                      StatusLight, StatusLight_Request,
                                      StatusLight_Response)


class RobotSimNode(Node):
    """ROS Node for WRoverPlayground."""

    def __init__(self, robot_sim_canvas: RobotSimCanvas):
        super().__init__('robot_sim_node')

        self.sim_canvas = robot_sim_canvas

        self._drive_subscriber = self.create_subscription(
            DrivePower, '/robot/drive_power', callback=self.drive_pub_callback, qos_profile=1)

        timer_period = 0.1
        self._ir_publisher = self.create_publisher(
            IRSensorData, '/robot/ir_sensor', qos_profile=1)
        self._ir_timer = self.create_timer(timer_period, self.publish_ir_data)

        self.light_service = self.create_service(
            StatusLight, '/robot/status_light', callback=self.light_callback)

        self.can_continue = False
        self.counter = 0
        self.continue_service = self.create_service(
            ContinueStatus, '/robot/continue',
            callback=lambda _, response: self.continue_callback(response))

        self._target_timer = self.create_timer(
            timer_period, self.process_targets)

    def drive_pub_callback(self, msg: DrivePower) -> None:
        """Set robot drive speed."""
        # if robot is not initialized, do nothing
        if self.sim_canvas.robot is None:
            return

        self.sim_canvas.robot.update_speeds(
            left_speed=msg.left_power, right_speed=msg.right_power)

    def publish_ir_data(self) -> None:
        """Publish IR sensor data."""
        ir_data = [math.inf] * 180

        # copy-on-read to avoid race condition
        target_pos = deepcopy(self.sim_canvas.get_target_pos())
        robot_pos = deepcopy(self.sim_canvas.robot.get_pos())

        # If there's no target, publish empty message
        if None in target_pos:
            self._ir_publisher.publish(IRSensorData(distances=ir_data))
            return

        # Get angle
        robot_orientation = self.sim_canvas.robot.get_orientation()
        dY = robot_pos[0] - robot_pos[0]
        dX = robot_pos[1] - robot_pos[1]
        absAngle = math.degrees(math.atan2(dY, dX))
        relAngle = (((absAngle - robot_orientation) + 540) % 360) - 180

        # Get distance
        if abs(relAngle) < 90:
            ind = 90 - int(relAngle)
            ir_data[ind] = math.sqrt(
                (robot_pos[0] - robot_pos[0]) ** 2 + (robot_pos[1] - robot_pos[1]) ** 2)

        # Publish final message
        self._ir_publisher.publish(IRSensorData(distances=ir_data))

    def light_callback(self, request: StatusLight_Request,
                       response: StatusLight_Response) -> StatusLight_Response:
        """Handle the status light service."""
        if request.light_status == StatusLight_Request.DONE:
            self.sim_canvas.status_light.set_reached_target()
        else:
            self.can_continue = False
            self.sim_canvas.status_light.set_navigating_to_target()

        return response

    def continue_callback(
            self, response: ContinueStatus_Response) -> ContinueStatus_Response:
        """Handle the continue service."""
        response.can_continue = self.can_continue

        return response

    def process_targets(self):
        """Check if the robot is at the target and the status light is set to done."""
        # copy-on-read to avoid race condition
        target_pos = deepcopy(self.sim_canvas.get_target_pos())
        robot_pos = deepcopy(self.sim_canvas.robot.get_pos())

        if target_pos[0] is None or target_pos[1] is None:
            return

        dist_to_target = math.sqrt(
            (target_pos[0] - robot_pos[0]) ** 2 + (target_pos[1] - robot_pos[1]) ** 2)
        if dist_to_target < 100 and self.sim_canvas.status_light.get_reached_target():
            self.can_continue = False
            self.sim_canvas.remove_target()
            self.sim_canvas.random_target()
            timer = threading.Timer(3, self.reset_continue)
            timer.daemon = True
            timer.start()

    def reset_continue(self):
        """Reset can_continue, allowing the robot to go to the next target."""
        self.can_continue = True
        self.counter += 1
        self.get_logger().info('CONTINUING...')
        self.get_logger().info(f'COMPLETE WITH {self.counter} TARGETS')
