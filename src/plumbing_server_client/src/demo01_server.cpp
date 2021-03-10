#include "ros/ros.h"
#include "plumbing_server_client/Addints.h"

bool doNums(plumbing_server_client::Addints::Request &request,
            plumbing_server_client::Addints::Response &response){
    int num1=request.num1;
    int num2=request.num2;
    ROS_INFO("num1=%d,num2=%d",num1,num2);
    int sum=num1+num2;
    response.sum=sum;
    ROS_INFO("sum=%d",sum);

    return true;
}
int main(int argc, char  *argv[])
{
    /* code */
    ros::init(argc,argv,"heiShui");
    ros::NodeHandle nh;
    ros::ServiceServer sever=nh.advertiseService("addInts",doNums);
    ROS_INFO("server is already");
    ros::spin();
    return 0;
}
