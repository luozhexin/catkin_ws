#!/usr/bin/env python2
#coding=utf-8
import rospy
from plumbing_pub_sub.msg import Person

def doPerson(person):
    rospy.loginfo("name is %s,age is %d,heigh is %f",person.name,person.age,person.heigh)

if __name__ == "__main__":
    rospy.init_node("xueShen")
    sub=rospy.Subscriber("liaoTan",Person,doPerson,queue_size=10)
    rospy.spin()
    