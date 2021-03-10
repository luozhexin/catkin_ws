#include "ros/ros.h"
#include "plumbing_server_client/Addints.h"

int main(int argc, char  *argv[])
{
    /* code */
    if(argc!=3){
        ROS_ERROR("please input two ints");
        return 1;
    }
    ros::init(argc,argv,"wo");
    ros::NodeHandle nh;
    ros::ServiceClient client=nh.serviceClient<plumbing_server_client::Addints>("addInts");
    plumbing_server_client::Addints ai;
    ai.request.num1=atoi(argv[1]);
    ai.request.num2=atoi(argv[2]);
    client.waitForExistence();
    bool flag=client.call(ai);
    if(flag){
        ROS_INFO("response succe");
        ROS_INFO("data is %d",ai.response.sum);
    } else{
        ROS_INFO("response fail");
    }
    return 0;
}
