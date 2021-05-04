#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block synthetic_data/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_synthetic_data_geometry_msgs_Twist> Pub_synthetic_data_3;

// For Block synthetic_data/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_synthetic_data_std_msgs_Float64> Pub_synthetic_data_6;

// For Block synthetic_data/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_synthetic_data_geometry_msgs_Twist> Pub_synthetic_data_13;

// For Block synthetic_data/Publish3
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_synthetic_data_std_msgs_Float64> Pub_synthetic_data_17;

void slros_node_init(int argc, char** argv);

#endif
