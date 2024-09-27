// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs_srvs:msg/DrivePower.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/msg/drive_power.hpp"


#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__DRIVE_POWER__TRAITS_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__DRIVE_POWER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs_srvs/msg/detail/drive_power__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs_srvs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DrivePower & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_power
  {
    out << "left_power: ";
    rosidl_generator_traits::value_to_yaml(msg.left_power, out);
    out << ", ";
  }

  // member: right_power
  {
    out << "right_power: ";
    rosidl_generator_traits::value_to_yaml(msg.right_power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DrivePower & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_power: ";
    rosidl_generator_traits::value_to_yaml(msg.left_power, out);
    out << "\n";
  }

  // member: right_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_power: ";
    rosidl_generator_traits::value_to_yaml(msg.right_power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DrivePower & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_msgs_srvs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs_srvs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs_srvs::msg::DrivePower & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs_srvs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs_srvs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs_srvs::msg::DrivePower & msg)
{
  return custom_msgs_srvs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs_srvs::msg::DrivePower>()
{
  return "custom_msgs_srvs::msg::DrivePower";
}

template<>
inline const char * name<custom_msgs_srvs::msg::DrivePower>()
{
  return "custom_msgs_srvs/msg/DrivePower";
}

template<>
struct has_fixed_size<custom_msgs_srvs::msg::DrivePower>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs_srvs::msg::DrivePower>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs_srvs::msg::DrivePower>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__DRIVE_POWER__TRAITS_HPP_
