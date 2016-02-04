# ros_erle_computervision_teleoperation
    ROSdistro indigo
    MAVROS 0.15.0

# The code has been tested on:
    Erle-Brain 2 => Image:Debian Jessie ("cyan")
    Desktop computer with system MAC OS X "El Capitan"

# it is also necessary to change in Erle-brain 2
    /home/erle/ros_catkin_ws/install_isolated/camera.sh
        #rosrun raspicam raspicam_node _framerate:=25 _quality:=45
        rosrun raspicam raspicam_raw_node

# On you Desktop computer 
    Check the ROS_MASTER_URI environmental variable
        ROS_IP=10.0.0.2
        ROS_MASTER_URI=http://10.0.0.1:11311
    
    To be able to see the images, in your Erle-Brain 2
    $ rosservice call /camera/start_capture
    Finally run on the Desktop computer "ros_erle_computervision_teleoperation"
    $ {home}./proyecto/devel/lib/ros_erle_computervision_teleoperation/ros_erle_computervision_teleoperation 



