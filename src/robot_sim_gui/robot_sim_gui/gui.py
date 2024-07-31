import tkinter as tk

import rclpy

from robot_sim_gui.robot_sim_canvas import RobotSimCanvas


def main(args=None):
    rclpy.init(args=args)

    window = tk.Tk()
    try:
        canvas = RobotSimCanvas(window, height=600, width=900, robot_init_x=30, robot_init_y=30)
        canvas.random_target()
        window.mainloop()
    except KeyboardInterrupt:
        pass
    finally:
        window.quit()


if __name__ == "__main__":
    main()
