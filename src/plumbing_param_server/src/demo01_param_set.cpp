#include "ros/ros.h"

int main(int argc, char  *argv[])
{
    /* code */
    ros::init(argc,argv,"set_param_c");
    ros::NodeHandle nh;
    nh.setParam("type","xiaohuang");
    nh.setParam("radius",0.15);
    ros::param::set("type_","xiaobai");
    ros::param::set("radius_param",0.15);

    nh.setParam("radius",0.2);
    ros::param::set("radius_param",0.2);
    return 0;
}
