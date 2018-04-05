#include <ros/ros.h>
#include "ur_positioner_kinetic/UrPositionerKinetic.hpp"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "ur_positioner_kinetic");
  ros::NodeHandle nodeHandle("~");

  ur_positioner_kinetic::UrPositionerKinetic urPositionerKinetic(nodeHandle);

  ros::spin();
  return 0;
}
