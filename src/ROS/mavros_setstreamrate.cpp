#include "mavros_setstreamrate.h"

MAVROS_setStreamRate::MAVROS_setStreamRate()
{
    ros::NodeHandle n;
    ros::ServiceClient client = n.serviceClient<mavros_msgs::StreamRate>("/mavros/set_stream_rate");
    mavros_msgs::StreamRate srv;
    srv.request.stream_id = 0;
    srv.request.message_rate = 100;
    srv.request.on_off = 1;
    if(client.call(srv)){
        ROS_INFO("send ok");
    }else{
        ROS_INFO("Failed to call service");
    }
}
