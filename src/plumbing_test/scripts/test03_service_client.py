#! /usr/bin/env python

import rospy
from turtlesim.srv import Spawn,SpawnRequest,SpawnResponse

if __name__ == "__main__":
    rospy.init_node("service_call_p")
    client=rospy.ServiceProxy("/spawn",Spawn)
    request=SpawnRequest()
    request.x=4.5
    request.y=2.0
    request.theta=-3
    request.name="turtle3"
    client.wait_for_service()
    try:
        response=client.call(request)
        rospy.loginfo("new turtle name is %s",response.name)
    except Exception as e:
        rospy.logerr("error")


    pass