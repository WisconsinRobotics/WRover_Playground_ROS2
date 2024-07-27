#!/usr/bin/env python3
from tkinter import *

import rclpy
from rclpy.node import Node

from robot_sim_gui.RobotSimCanvas import RobotSimCanvas
from robot_sim_gui.msg import DrivePower, IRSensorData
from robot_sim_gui.srv import LightStatus, ContinuationStatus

import math
import random
from copy import deepcopy
import threading

class RobotSimGui(Node):
    def __init__(self):

        super().__init__('robot_sim_gui')

        # Set up canvas
        window = Tk()
        window.geometry(f'{window.winfo_screenwidth()}x{window.winfo_screenheight()}')

        # Set window icon
        icon_tk_image = PhotoImage(file=f'{rospy.get_param("~resource_path")}/WRIcon.png')
        window.wm_iconphoto(False, icon_tk_image)

        robotSimCanvas = RobotSimCanvas(window, window.winfo_screenwidth(), window.winfo_screenheight(), rospy.get_param('~resource_path'), robot_init_x=300, robot_init_y=500)
        
        #Setting up Publishers
        self.ir_publisher = self.create_publisher(IRSensorData, '/robot/ir_sensor', queue_size=1)
        
        #setting up subscribers
        powerSubscriber = rospy.Subscriber(DrivePower, '/robot/drive_power', setRobotPower, queue_size=1)
        
        #Setting up service
        self.light_service = self.create_service(LightStatus, '/robot/status_light', self.processLight)    

        timer_period = 0.1 # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    #First Timer
    def timer_callback(self):
        global canContinue
        currTargetPos = deepcopy(robotSimCanvas.getTargetPos()) # copy-on-read to avoid race condition
        currRobotPos = robotSimCanvas.getRobotPos()

        if currTargetPos == [None, None]:
            return
        
        distToTarget = math.sqrt((currTargetPos[0] - currRobotPos[0]) ** 2 + (currTargetPos[1] - currRobotPos[1]) ** 2)
        if distToTarget < 100 and robotSimCanvas.getReachedTarget():
            canContinue = False
            robotSimCanvas.removeTarget()
            placeTargetRandom()

        timer_period = 3 # seconds
        self.timer_inner = self.create_timer(timer_period, self.resetContinue)

    #Second Timer
    def resetContinue(self):
        global canContinue
        global counter
        canContinue = True
        counter += 1
        print('CONTINUING...')
        print(f'COMPLETE WITH {counter} TARGETS')

    # Set drive power
    def setRobotPower(self, msg: DrivePower):
        if not robotSimCanvas.getReachedTarget():
            robotSimCanvas.updateRobotSpeeds([msg.leftPower, msg.rightPower])
        else:
            robotSimCanvas.updateRobotSpeeds([0,0])


    # Process placing/hitting targets
    def placeTargetRandom():
        robotSimCanvas.addTarget(random.randint(150,robotSimCanvas.canvas.winfo_width()-150), random.randint(150,robotSimCanvas.canvas.winfo_height()-150))

    def processLight(self, request, response):
        global canContinue
        # print(f'HEAD MSG {msg.lightStatus}')
        if request.lightStatus: robotSimCanvas.status_light.setReachedTarget()
        else:
            canContinue = False
            robotSimCanvas.status_light.setNavigatingToTarget()
        return response
    

    ### Have not changed from below here##_
    #--------------------------------------------------------------------------------------#
    canContinue = False
    def processContinuation():
        return ContinuationStatusResponse(canContinue=canContinue)
    continuation_service = rospy.Service('/robot/continuation', ContinuationStatus, lambda _: processContinuation())

    counter=0
    def processTargets():
        
    targetTimer = rospy.Timer(rospy.Duration(0.1), lambda _: processTargets())
    placeTargetRandom()

    # Publish sensing messages
    def publishIRMessage(publisher: rospy.Publisher):
        startingMessage = [math.inf] * 180
        currTargetPos = deepcopy(robotSimCanvas.getTargetPos()) # copy-on-read to avoid race condition
        currRobotPos = robotSimCanvas.getRobotPos()

        # If there's no target, publish empty message
        if None in currTargetPos:
            publisher.publish(IRSensorData(distances=startingMessage))
            return

        dY = currRobotPos[0] - currTargetPos[0]
        dX = currRobotPos[1] - currTargetPos[1]
        absAngle = math.degrees(math.atan2(dY, dX))
        relAngle = (((absAngle - (robotSimCanvas.getRobotOrientation()))+ 540) % 360) - 180

        # Get distance
        if abs(relAngle) < 90:
            ind = 90 - int(relAngle)
            startingMessage[ind] = math.sqrt((currTargetPos[0] - currRobotPos[0]) ** 2 + (currTargetPos[1] - currRobotPos[1]) ** 2)
        # Publish final message
        publisher.publish(IRSensorData(distances=startingMessage))
    irPublisher = rospy.Publisher('/robot/ir_sensor', IRSensorData, queue_size=1)
    irTimer = rospy.Timer(rospy.Duration(0.1), lambda _: publishIRMessage(irPublisher))

    # Stop Tk on ROS shutsdown
    def stopTk():
        window.quit()
    rospy.on_shutdown(stopTk)
    t1 = threading.Thread(target=lambda: rospy.spin())
    t1.start()

    window.mainloop()
