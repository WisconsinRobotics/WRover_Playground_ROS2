# WRover_Playground_ROS2

 Let’s first get the simulation running. Here are the steps:
Open a new terminal and navigate to WRPlayTemp
run “colcon build”
Open a new terminal and source your workspace with “source install/local_setup.bash”
Now you can run “ros2 run robot_sim_gui gui” to run the gui.py file that should start the simulation. If the robot and beacon show up without moving then it is correct.

TASK 1:

Create a new package for controlling the robot. In that new package, make a new file that contains a node that will publish to the topic that makes the robot move. For now, you can publish any value. Your goal is to make the robot move.

TASK 2: 
	There is a topic that gives you sensor data for the rover called “/robot/ir_sensor.” This works like an Infrared Sensor that provides a list with 180 data points going from 9 o’ clock to 3 o’clock going clockwise. Subscribe to this data to drive towards the beacon. Your goal is to reach the target.

TASK 3:
	In the real world, we need the robot to notify us that it has reached the target. You are going to use services to accomplish this task. There are two services already set up in gui.py. LightStatus and ContinuationStatus. You need to first make a client to the LightStatus service to say that you are DONE when you are within 100 units of the beacon. Then, you will continuously poll the ContinuationsStatus service until the canComplete message is True. Once then, you can continue to the next beacon. It is highly recommended to check gui.py to see how the services work so you can implement the clients correctly. Your goal is for the robot to keep going and arriving at targets until you close the program. 

TASK 4: (Extra)
	Use PID controls to arrive at the target more effectively. You can also try to implement turning PID but that might be a little overkill.


FOR HELP:
	Always refer to these tutorials ( https://docs.ros.org/en/jazzy/Tutorials/Beginner-Client-L ibraries.html) as well as the internet, software members, and leads. (Other code in the project can also be helpful).
