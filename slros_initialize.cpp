#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "synthetic_data";

// For Block synthetic_data/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_synthetic_data_geometry_msgs_Twist> Pub_synthetic_data_3;

// For Block synthetic_data/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_synthetic_data_std_msgs_Float64> Pub_synthetic_data_6;

// For Block synthetic_data/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_synthetic_data_geometry_msgs_Twist> Pub_synthetic_data_13;

// For Block synthetic_data/Publish3
SimulinkPublisher<std_msgs::Float64, SL_Bus_synthetic_data_std_msgs_Float64> Pub_synthetic_data_17;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

