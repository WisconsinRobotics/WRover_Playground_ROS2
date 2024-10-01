// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from custom_msgs_srvs:msg/IRSensorData.idl
// generated code does not contain a copyright notice
#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs_srvs/msg/detail/ir_sensor_data__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
bool cdr_serialize_custom_msgs_srvs__msg__IRSensorData(
  const custom_msgs_srvs__msg__IRSensorData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
bool cdr_deserialize_custom_msgs_srvs__msg__IRSensorData(
  eprosima::fastcdr::Cdr &,
  custom_msgs_srvs__msg__IRSensorData * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
size_t get_serialized_size_custom_msgs_srvs__msg__IRSensorData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
size_t max_serialized_size_custom_msgs_srvs__msg__IRSensorData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
bool cdr_serialize_key_custom_msgs_srvs__msg__IRSensorData(
  const custom_msgs_srvs__msg__IRSensorData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
size_t get_serialized_size_key_custom_msgs_srvs__msg__IRSensorData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
size_t max_serialized_size_key_custom_msgs_srvs__msg__IRSensorData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs_srvs, msg, IRSensorData)();

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
