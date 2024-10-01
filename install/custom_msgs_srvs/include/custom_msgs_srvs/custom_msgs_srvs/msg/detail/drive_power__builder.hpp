// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs_srvs:msg/DrivePower.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/msg/drive_power.hpp"


#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__DRIVE_POWER__BUILDER_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__DRIVE_POWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs_srvs/msg/detail/drive_power__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs_srvs
{

namespace msg
{

namespace builder
{

class Init_DrivePower_right_power
{
public:
  explicit Init_DrivePower_right_power(::custom_msgs_srvs::msg::DrivePower & msg)
  : msg_(msg)
  {}
  ::custom_msgs_srvs::msg::DrivePower right_power(::custom_msgs_srvs::msg::DrivePower::_right_power_type arg)
  {
    msg_.right_power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_srvs::msg::DrivePower msg_;
};

class Init_DrivePower_left_power
{
public:
  Init_DrivePower_left_power()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrivePower_right_power left_power(::custom_msgs_srvs::msg::DrivePower::_left_power_type arg)
  {
    msg_.left_power = std::move(arg);
    return Init_DrivePower_right_power(msg_);
  }

private:
  ::custom_msgs_srvs::msg::DrivePower msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::msg::DrivePower>()
{
  return custom_msgs_srvs::msg::builder::Init_DrivePower_left_power();
}

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__DRIVE_POWER__BUILDER_HPP_
