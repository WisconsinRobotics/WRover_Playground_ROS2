// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs_srvs:msg/IRSensorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/msg/ir_sensor_data.hpp"


#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__TRAITS_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs_srvs/msg/detail/ir_sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs_srvs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IRSensorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: distances
  {
    if (msg.distances.size() == 0) {
      out << "distances: []";
    } else {
      out << "distances: [";
      size_t pending_items = msg.distances.size();
      for (auto item : msg.distances) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IRSensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distances
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.distances.size() == 0) {
      out << "distances: []\n";
    } else {
      out << "distances:\n";
      for (auto item : msg.distances) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IRSensorData & msg, bool use_flow_style = false)
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
  const custom_msgs_srvs::msg::IRSensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs_srvs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs_srvs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs_srvs::msg::IRSensorData & msg)
{
  return custom_msgs_srvs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs_srvs::msg::IRSensorData>()
{
  return "custom_msgs_srvs::msg::IRSensorData";
}

template<>
inline const char * name<custom_msgs_srvs::msg::IRSensorData>()
{
  return "custom_msgs_srvs/msg/IRSensorData";
}

template<>
struct has_fixed_size<custom_msgs_srvs::msg::IRSensorData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs_srvs::msg::IRSensorData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs_srvs::msg::IRSensorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__TRAITS_HPP_
