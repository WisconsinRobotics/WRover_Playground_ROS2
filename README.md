# WRover_Playground_ROS2

## TODO Instructions for setting up virtual machine

## Playground setup instructions

1. Clone the git repository

2. Run `colcon build` in the `WRover_Playground_ROS2` folder

3. Run `source install/setup.bash`. This needs to be run in every new terminal.

4. Launch the playground: `ros2 launch robot_sim_gui gui_launch.py`

To test the playground, run
```
ros2 topic pub /robot/drive_power robot_sim_interfaces/msg/DrivePower "left_power: 0.5
right_power: 0.5"
```

The robot should begin driving forwards.
