#!/usr/bin/env python2

import rospy
from plumbing_server_client.srv import Addints,AddintsRequest,AddintsResponse

def doReq(req):
    sum=req.num1+req.num2
    rospy.loginfo("num1=%d,num2=%d",req.num1,req.num2)
    resp=AddintsResponse(sum)
    return resp
if __name__ =="__main__":
    rospy.init_node("heiShui")
    server=rospy.Service("AddInts",Addints,doReq)
    rospy.spin()
    pass