#include "ros/ros.h"

int main(int argc, char  *argv[])
{
    /* code */
    ros::init(argc,argv,"get_param_c");
    ros::NodeHandle nh;
    double radius=nh.param("radius",0.5);
    ROS_INFO("radius=%.2f",radius);

    double radius2=0.0;
    bool result=nh.getParam("radius",radius2);
    if (result)
    {
        ROS_INFO("radius is %.2f",radius2);
    }else{
        ROS_INFO("radius not exist");
    }

    std::vector<std::string> names;
    nh.getParamNames(names);
    for (auto &&name : names)
    {
        ROS_INFO("paramName is %s",name.c_str());
    }

    bool flag1=nh.hasParam("radius");
    bool flag2=nh.hasParam("radiusxxx");
    ROS_INFO("radius is exist? %d",flag1);
    ROS_INFO("radiusxxx is exist? %d",flag2);

    std::string key;
    nh.searchParam("radius",key);
    ROS_INFO("result is %s",key.c_str());

    double radius_param=ros::param::param("radius",100.5);
    ROS_INFO("radius_param =%.2f",radius_param);

    std::vector<std::string> names_param;
    ros::param::getParamNames(names_param);
    for (auto &&name_param : names_param)
    {
        ROS_INFO("key:%s",name_param.c_str());
    }
    
    return 0;
}
