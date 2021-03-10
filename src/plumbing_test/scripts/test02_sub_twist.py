#! /usr/bin/env python

import rospy
from turtlesim.msg import Pose
def doPose(pose):
    rospy.loginfo("position(%.2f,%.2f),theta:%.2f,linearVel:%.2f,angularVel:%.2f",
                    pose.x,pose.y,pose.theta,pose.linear_velocity,pose.angular_velocity)
if __name__ == "__main__":
    rospy.init_node("sub_pose_p")
    sub=rospy.Subscriber("/turtle1/pose",Pose,doPose,queue_size=10)
    rospy.spin()
    pass