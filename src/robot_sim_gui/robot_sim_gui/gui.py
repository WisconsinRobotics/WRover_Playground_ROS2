import sys
import threading
import tkinter as tk
from argparse import ArgumentParser

import rclpy

import rclpy.parameter
import rclpy.utilities

from robot_sim_gui.robot_sim_node import RobotSimNode
from robot_sim_gui.robot_sim_canvas import RobotSimCanvas


def run_ros_node(robot_sim: RobotSimCanvas):
    rclpy.init()

    # Initialize ROS node
    sim_node = RobotSimNode(robot_sim)

    rclpy.spin(sim_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    sim_node.destroy_node()
    rclpy.shutdown()


def main(args=None):
    parser = ArgumentParser('gui.py', description='A graphical ROS2 rover simulation')
    parser.add_argument('--resource-path', type=str, help='Path to image files used by the GUI')
    parser.add_argument('--height', type=int, help='Set height of the GUI window, 0 for full height')
    parser.add_argument('--width', type=int, help='Set width of the GUI window, 0 for full width')

    parsed_args, _ = parser.parse_known_args(args)
    resource_path = parsed_args.resource_path
    height = parsed_args.height
    width = parsed_args.width

    window = tk.Tk()
    try:
        canvas = RobotSimCanvas(window, resource_path=resource_path, height=height, width=width, robot_init_x=600, robot_init_y=600)
        canvas.random_target()

        # ROS node needs to run in a separate thread because window.mainloop() is a blocking function
        ros_thread = threading.Thread(target=lambda: run_ros_node(canvas))
        ros_thread.start()

        window.mainloop()
    except KeyboardInterrupt:
        pass
    finally:
        window.quit()


if __name__ == "__main__":
    main(sys.argv)
