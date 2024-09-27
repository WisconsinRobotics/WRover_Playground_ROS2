// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs_srvs:msg/IRSensorData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_msgs_srvs/msg/detail/ir_sensor_data__functions.h"
#include "custom_msgs_srvs/msg/detail/ir_sensor_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace custom_msgs_srvs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void IRSensorData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_msgs_srvs::msg::IRSensorData(_init);
}

void IRSensorData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_msgs_srvs::msg::IRSensorData *>(message_memory);
  typed_message->~IRSensorData();
}

size_t size_function__IRSensorData__distances(const void * untyped_member)
{
  (void)untyped_member;
  return 180;
}

const void * get_const_function__IRSensorData__distances(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 180> *>(untyped_member);
  return &member[index];
}

void * get_function__IRSensorData__distances(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 180> *>(untyped_member);
  return &member[index];
}

void fetch_function__IRSensorData__distances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__IRSensorData__distances(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__IRSensorData__distances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__IRSensorData__distances(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IRSensorData_message_member_array[1] = {
  {
    "distances",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    180,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs::msg::IRSensorData, distances),  // bytes offset in struct
    nullptr,  // default value
    size_function__IRSensorData__distances,  // size() function pointer
    get_const_function__IRSensorData__distances,  // get_const(index) function pointer
    get_function__IRSensorData__distances,  // get(index) function pointer
    fetch_function__IRSensorData__distances,  // fetch(index, &value) function pointer
    assign_function__IRSensorData__distances,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IRSensorData_message_members = {
  "custom_msgs_srvs::msg",  // message namespace
  "IRSensorData",  // message name
  1,  // number of fields
  sizeof(custom_msgs_srvs::msg::IRSensorData),
  false,  // has_any_key_member_
  IRSensorData_message_member_array,  // message members
  IRSensorData_init_function,  // function to initialize message memory (memory has to be allocated)
  IRSensorData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IRSensorData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IRSensorData_message_members,
  get_message_typesupport_handle_function,
  &custom_msgs_srvs__msg__IRSensorData__get_type_hash,
  &custom_msgs_srvs__msg__IRSensorData__get_type_description,
  &custom_msgs_srvs__msg__IRSensorData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custom_msgs_srvs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs_srvs::msg::IRSensorData>()
{
  return &::custom_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::IRSensorData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs_srvs, msg, IRSensorData)() {
  return &::custom_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::IRSensorData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
