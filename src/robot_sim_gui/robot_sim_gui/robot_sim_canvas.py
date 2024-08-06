import random
import tkinter as tk
from typing import Optional, Tuple

from robot_sim_gui.robot import Robot
from robot_sim_gui.status_light import StatusLight


class RobotSimCanvas(tk.Canvas):
    """Tk Canvas object for drawing the WRoverPlayground GUI."""

    def __init__(
        self,
        root: tk.Tk,
        resource_path: str = 'images',
        robot_init_x: int = 0,
        robot_init_y: int = 0,
        **kw
    ):
        if kw.get('height', 0) == 0:
            kw['height'] = root.winfo_screenheight()
        if kw.get('width', 0) == 0:
            kw['width'] = root.winfo_screenwidth()

        # Initialize canvas
        super().__init__(master=root, **kw)

        self.resource_path = resource_path

        # Set up target variables
        self.target_tk_image: Optional[tk.PhotoImage] = None
        self.target_img_id: Optional[int] = None
        self.target_x_pos: Optional[int] = None
        self.target_y_pos: Optional[int] = None

        self.pack()

        # Create robot
        self.robot = Robot(
            self, self.resource_path, init_x=robot_init_x, init_y=robot_init_y
        )

        # # Add status light
        self.status_light = StatusLight(self)

    def add_target(self, x_pos: int = 0, y_pos: int = 0):
        """Add the target or move it to the specified position."""
        # Open image is it hasn't been yet
        if self.target_tk_image is None:
            self.target_tk_image = tk.PhotoImage(
                file=f'{self.resource_path}/TrafficCone.png'
            )

        # Generate new target position
        self.target_x_pos = x_pos
        self.target_y_pos = y_pos

        # Create the image if it isn't on canvas
        if self.target_img_id is None:
            self.target_img_id = self.create_image(
                self.target_x_pos,
                self.target_y_pos,
                image=self.target_tk_image,
                anchor=tk.NW,
            )

        # Otherwise, just move the target
        else:
            self.moveto(self.target_img_id, self.target_x_pos, self.target_y_pos)

    def random_target(self):
        """Place the target at a random position."""
        random_x = random.randint(150, self.winfo_width() - 150)
        random_y = random.randint(150, self.winfo_height() - 150)
        self.add_target(random_x, random_y)

    def remove_target(self):
        """Remove target, if it exists."""
        if self.target_img_id is not None:
            self.delete(self.target_img_id)
            self.target_img_id = None
            self.target_x_pos = None
            self.target_y_pos = None

    def get_target_pos(self) -> Tuple[Optional[int], Optional[int]]:
        """Return the position of the target."""
        return (self.target_x_pos, self.target_y_pos)
