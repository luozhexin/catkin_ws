#!/usr/bin/env python2
#coding=utf-8 

import rospy

if __name__ == "__main__":

    rospy.init_node("change_bgColor_p")

    rospy.set_param("/turtlesim/background_b",0)  
    rospy.set_param("/turtlesim/background_g",255)
    rospy.set_param("/turtlesim/background_r",0)
    pass

    