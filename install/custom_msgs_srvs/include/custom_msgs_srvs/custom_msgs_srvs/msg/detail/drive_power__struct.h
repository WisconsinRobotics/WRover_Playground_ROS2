// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs_srvs:msg/DrivePower.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/msg/drive_power.h"


#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__DRIVE_POWER__STRUCT_H_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__DRIVE_POWER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/DrivePower in the package custom_msgs_srvs.
typedef struct custom_msgs_srvs__msg__DrivePower
{
  double left_power;
  double right_power;
} custom_msgs_srvs__msg__DrivePower;

// Struct for a sequence of custom_msgs_srvs__msg__DrivePower.
typedef struct custom_msgs_srvs__msg__DrivePower__Sequence
{
  custom_msgs_srvs__msg__DrivePower * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_srvs__msg__DrivePower__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__DRIVE_POWER__STRUCT_H_
