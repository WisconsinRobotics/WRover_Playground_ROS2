// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs_srvs:msg/IRSensorData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs_srvs/msg/detail/ir_sensor_data__rosidl_typesupport_introspection_c.h"
#include "custom_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs_srvs/msg/detail/ir_sensor_data__functions.h"
#include "custom_msgs_srvs/msg/detail/ir_sensor_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__IRSensorData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs_srvs__msg__IRSensorData__init(message_memory);
}

void custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__IRSensorData_fini_function(void * message_memory)
{
  custom_msgs_srvs__msg__IRSensorData__fini(message_memory);
}

size_t custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__size_function__IRSensorData__distances(
  const void * untyped_member)
{
  (void)untyped_member;
  return 180;
}

const void * custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__get_const_function__IRSensorData__distances(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__get_function__IRSensorData__distances(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__fetch_function__IRSensorData__distances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__get_const_function__IRSensorData__distances(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__assign_function__IRSensorData__distances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__get_function__IRSensorData__distances(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__IRSensorData_message_member_array[1] = {
  {
    "distances",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    180,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs__msg__IRSensorData, distances),  // bytes offset in struct
    NULL,  // default value
    custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__size_function__IRSensorData__distances,  // size() function pointer
    custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__get_const_function__IRSensorData__distances,  // get_const(index) function pointer
    custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__get_function__IRSensorData__distances,  // get(index) function pointer
    custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__fetch_function__IRSensorData__distances,  // fetch(index, &value) function pointer
    custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__assign_function__IRSensorData__distances,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__IRSensorData_message_members = {
  "custom_msgs_srvs__msg",  // message namespace
  "IRSensorData",  // message name
  1,  // number of fields
  sizeof(custom_msgs_srvs__msg__IRSensorData),
  false,  // has_any_key_member_
  custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__IRSensorData_message_member_array,  // message members
  custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__IRSensorData_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__IRSensorData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__IRSensorData_message_type_support_handle = {
  0,
  &custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__IRSensorData_message_members,
  get_message_typesupport_handle_function,
  &custom_msgs_srvs__msg__IRSensorData__get_type_hash,
  &custom_msgs_srvs__msg__IRSensorData__get_type_description,
  &custom_msgs_srvs__msg__IRSensorData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs_srvs, msg, IRSensorData)() {
  if (!custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__IRSensorData_message_type_support_handle.typesupport_identifier) {
    custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__IRSensorData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msgs_srvs__msg__IRSensorData__rosidl_typesupport_introspection_c__IRSensorData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
