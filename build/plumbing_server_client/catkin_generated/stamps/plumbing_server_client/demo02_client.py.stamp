#! /usr/bin/env python
import rospy
import sys
from plumbing_server_client.srv import Addints,AddintsRequest,AddintsResponse
if __name__=="__main__":
    if len(sys.argv)!=3 :
        rospy.logerr("nums 0f arg is warn")
        sys.exit(1)
    rospy.init_node("wo")
    client=rospy.ServiceProxy("AddInts",Addints)
    client.wait_for_service()
    num1=int(sys.argv[1])
    num2=int(sys.argv[2])
    responce=client.call(num1,num2)
    # responce=client.call(12,34)
    rospy.loginfo("data is %d",responce.sum)
    pass