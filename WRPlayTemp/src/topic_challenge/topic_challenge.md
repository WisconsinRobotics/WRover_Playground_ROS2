# WRoverPlayground - Topic Training

## Challenge
Once you have completed the tutorials, you should have enought knowledge to start modifying the simulation. The simulation will include a rover that your code is meant to control using mock navigation data to reach some beacon. There will be multiple rounds of this, each round containing one beacon.

Let’s first get the simulation running. Here are the steps:
1. Open a new terminal and navigate to WRPlayTemp
2. run “colcon build”
3. Open a new terminal and source your workspace with “source install/local_setup.bash”
4. Now you can run “ros2 run robot_sim_gui gui” to run the gui.py file that should start the simulation. If the robot and cone show up without moving then it is correct.

Your task: There is a topic called “/robot/drive_power” that takes a DrivePower message in. You can find it inside robot_sim_gui/gui.py. Make a new file that contains a node that will publish to that same topic and make the robot move. For now, you can publish any value, your goal is to make the robot move.

Use this tutorial as a reference: https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html