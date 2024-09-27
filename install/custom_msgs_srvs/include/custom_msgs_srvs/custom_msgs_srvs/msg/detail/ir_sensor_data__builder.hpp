// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs_srvs:msg/IRSensorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/msg/ir_sensor_data.hpp"


#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__BUILDER_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs_srvs/msg/detail/ir_sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs_srvs
{

namespace msg
{

namespace builder
{

class Init_IRSensorData_distances
{
public:
  Init_IRSensorData_distances()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs_srvs::msg::IRSensorData distances(::custom_msgs_srvs::msg::IRSensorData::_distances_type arg)
  {
    msg_.distances = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_srvs::msg::IRSensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::msg::IRSensorData>()
{
  return custom_msgs_srvs::msg::builder::Init_IRSensorData_distances();
}

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__BUILDER_HPP_
