#!/usr/bin/env python2
#coding=utf-8
import rospy

if __name__ == "__main__":
    rospy.init_node("param_get_p")
    radius=rospy.get_param("radius_p",15)
    radius1=rospy.get_param("radius_p_",15)
    rospy.loginfo("radius is %.2f",radius)
    rospy.loginfo("radius is %.2f",radius1)

    names=rospy.get_param_names()
    for name in names:
        rospy.loginfo("param name is %s",name)

    flag1=rospy.has_param("radius_p")
    if flag1:
        rospy.loginfo("radius_p is exist")
    else:
        rospy.loginfo("radius_p not exist")

    key=rospy.search_param("radius_p")
    rospy.loginfo("key =%s",key)


    
    pass