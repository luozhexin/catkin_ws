#include "ros/ros.h"
#include "plumbing_pub_sub/Person.h"
int main(int argc, char  *argv[])
{
    /* code */
    ros::init(argc,argv,"banZhuRen");
    ros::NodeHandle nh;
    ros::Publisher pub=nh.advertise<plumbing_pub_sub::Person>("liaoTan",10);
    plumbing_pub_sub::Person person;
    person.name="zhangSan";
    person.age=20;
    person.heigh=170;
    ros::Rate rate(1);
    while(ros::ok()){
        person.age+=1;
        pub.publish(person);
        rate.sleep();
        ros::spinOnce();

    }
    return 0;
}
