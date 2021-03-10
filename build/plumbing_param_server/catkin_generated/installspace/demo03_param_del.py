#!/usr/bin/env python2

import rospy

if __name__ == "__main__":
    rospy.init_node("param_del_p")
    try:
        rospy.delete_param("type_p")
    except Exception as e:
        rospy.loginfo("deleted param is not exist")
    pass