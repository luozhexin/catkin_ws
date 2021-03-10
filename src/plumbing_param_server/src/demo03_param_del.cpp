#include "ros/ros.h"

int main(int argc, char  *argv[])
{
    /* code */
    ros::init(argc,argv,"param_del_c");
    ros::NodeHandle nh;
    bool flag1=nh.deleteParam("radius");
    if (flag1){
        ROS_INFO("delet succes");
    } else{
        ROS_INFO("delet fault");
    }

    bool flag2=ros::param::del("radius_param");
    if (flag2){
        ROS_INFO("delet succes");
    } else{
        ROS_INFO("delet fault");
    }
    return 0;
}
