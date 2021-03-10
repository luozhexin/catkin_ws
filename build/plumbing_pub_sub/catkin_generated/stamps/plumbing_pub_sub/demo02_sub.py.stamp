#! /usr/bin/env python
#coding=utf-8
import rospy
from std_msgs.msg import String

def doMsg(msg):
    rospy.loginfo("data is %s",msg.data)

if __name__ == "__main__":
    rospy.init_node("laiZi")
    sub=rospy.Subscriber("fangzi",String,doMsg,queue_size=10)
    rospy.spin()
    pass
