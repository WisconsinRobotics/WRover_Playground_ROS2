#!/bin/bash

# Install rosdoc2
apt update && apt install -y python3-rosdoc2

# Build code
source /opt/ros/jazzy/setup.bash
colcon build --packages-select robot_sim_gui robot_sim_interfaces

source install/setup.bash

# Generate documentation
rosdoc2 build --package-path src/robot_sim_interfaces
rosdoc2 build --package-path src/robot_sim_gui
