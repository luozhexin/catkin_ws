#include "ros/ros.h"

int main(int argc, char  *argv[])
{
    /* code */
    ros::init(argc,argv,"change_bgColor");
    // use nodehandle
    ros::NodeHandle nh("turtlesim");
    nh.setParam("background_b",0);
    nh.setParam("background_g",0);
    nh.setParam("background_r",255);

    //or no use nodehandle
    // ros::param::set("/turtlesim/background_b",0);
    // ros::param::set("/turtlesim/background_g",0);
    // ros::param::set("/turtlesim/background_r",255);

    return 0;
}
