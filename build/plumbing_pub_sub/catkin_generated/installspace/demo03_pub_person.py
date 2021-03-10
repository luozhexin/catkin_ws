#!/usr/bin/env python2
#coding=utf-8
import rospy
from plumbing_pub_sub.msg import Person
if __name__ == "__main__":
    rospy.init_node("banZhuRen")
    pub=rospy.Publisher("liaoTan",Person,queue_size=10)
    person=Person()
    person.name="hulu"
    person.age=17
    person.heigh=170
    rate=rospy.Rate(1)
    while not rospy.is_shutdown():
        pub.publish(person)
        rate.sleep()
        rospy.loginfo("name is %s,age is %d,heigh is %f",person.name,person.age,person.heigh)

    pass