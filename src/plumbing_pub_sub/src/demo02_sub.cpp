#include "ros/ros.h"
#include "std_msgs/String.h"
void doMsg(const std_msgs::String::ConstPtr& msg)
{
    ROS_INFO("翠花订阅的数据：%s",msg->data.c_str());
}
int main(int argc, char  *argv[])
{
    /* code */
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"cuiHua");
    ros::NodeHandle nh;
    ros::Subscriber sub=nh.subscribe("fangzi",10,doMsg);
    ros::spin();
    return 0;
}
