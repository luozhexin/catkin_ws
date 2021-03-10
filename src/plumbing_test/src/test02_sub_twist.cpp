#include "ros/ros.h"
#include "turtlesim/Pose.h"
void doPose(const turtlesim::Pose::ConstPtr &pose)
{
    ROS_INFO("pose is (%.2f,%.2f),theta is %.2f,linearVel is %.2f,angleVel is %.2f",
    pose->x,pose->y,pose->theta,pose->linear_velocity,pose->angular_velocity);
}
int main(int argc, char  *argv[])
{
    /* code */
    ros::init(argc,argv,"sub_pose");
    ros::NodeHandle nh;
    ros::Subscriber sub=nh.subscribe("/turtle1/pose",100,doPose);
    ros::spin();
    return 0;
}
