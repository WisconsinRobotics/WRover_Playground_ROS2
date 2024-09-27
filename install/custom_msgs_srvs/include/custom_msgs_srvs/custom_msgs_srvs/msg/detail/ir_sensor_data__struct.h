// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs_srvs:msg/IRSensorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/msg/ir_sensor_data.h"


#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__STRUCT_H_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/IRSensorData in the package custom_msgs_srvs.
typedef struct custom_msgs_srvs__msg__IRSensorData
{
  double distances[180];
} custom_msgs_srvs__msg__IRSensorData;

// Struct for a sequence of custom_msgs_srvs__msg__IRSensorData.
typedef struct custom_msgs_srvs__msg__IRSensorData__Sequence
{
  custom_msgs_srvs__msg__IRSensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_srvs__msg__IRSensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__STRUCT_H_
