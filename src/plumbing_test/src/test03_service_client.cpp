#include "ros/ros.h"
#include "turtlesim/Spawn.h"
int main(int argc, char  *argv[])
{
    /* code */
    ros::init(argc,argv,"service_call");
    ros::NodeHandle nh;
    ros::ServiceClient client=nh.serviceClient<turtlesim::Spawn>("/spawn");
    turtlesim::Spawn spwan;
    spwan.request.x=1.0;
    spwan.request.y=4.0;
    spwan.request.theta=1.57;
    spwan.request.name="turtle2";

    client.waitForExistence();

    bool flag=client.call(spwan);
    if(flag)
    {
        ROS_INFO("new turtle is %s",spwan.response.name.c_str());
    }
    else
    {
        ROS_INFO("can't new a turtle");
    }

    return 0;
}
