// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs_srvs:msg/DrivePower.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_msgs_srvs/msg/detail/drive_power__functions.h"
#include "custom_msgs_srvs/msg/detail/drive_power__struct.hpp"
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

void DrivePower_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_msgs_srvs::msg::DrivePower(_init);
}

void DrivePower_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_msgs_srvs::msg::DrivePower *>(message_memory);
  typed_message->~DrivePower();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DrivePower_message_member_array[2] = {
  {
    "left_power",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs::msg::DrivePower, left_power),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_power",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs::msg::DrivePower, right_power),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DrivePower_message_members = {
  "custom_msgs_srvs::msg",  // message namespace
  "DrivePower",  // message name
  2,  // number of fields
  sizeof(custom_msgs_srvs::msg::DrivePower),
  false,  // has_any_key_member_
  DrivePower_message_member_array,  // message members
  DrivePower_init_function,  // function to initialize message memory (memory has to be allocated)
  DrivePower_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DrivePower_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DrivePower_message_members,
  get_message_typesupport_handle_function,
  &custom_msgs_srvs__msg__DrivePower__get_type_hash,
  &custom_msgs_srvs__msg__DrivePower__get_type_description,
  &custom_msgs_srvs__msg__DrivePower__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custom_msgs_srvs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs_srvs::msg::DrivePower>()
{
  return &::custom_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::DrivePower_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs_srvs, msg, DrivePower)() {
  return &::custom_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::DrivePower_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
