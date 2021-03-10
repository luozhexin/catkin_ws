#! /usr/bin/env python
#coding=utf-8
import rospy

if __name__ == "__main__":
    rospy.init_node("param_set_p")
    rospy.set_param("type_p","xiaohuache")
    rospy.set_param("radius_p",10)

    rospy.set_param("radius_p",20)

    pass