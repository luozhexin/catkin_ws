#include "ros/ros.h"
#include "plumbing_pub_sub/Person.h"

void doPerson(const plumbing_pub_sub::Person::ConstPtr& doPerson){
    ROS_INFO("data is %s,%d,%f",doPerson->name.c_str(),doPerson->age,doPerson->heigh);
}
int main(int argc, char  *argv[])
{
    /* code */
    ros::init(argc,argv,"xueShen");
    ros::NodeHandle nh;
    ros::Subscriber sub=nh.subscribe<plumbing_pub_sub::Person>("liaoTan",10,doPerson);
    ros::spin();

    return 0;
}
