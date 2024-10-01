// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_msgs_srvs:msg/IRSensorData.idl
// generated code does not contain a copyright notice

#include "custom_msgs_srvs/msg/detail/ir_sensor_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_type_hash_t *
custom_msgs_srvs__msg__IRSensorData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0xa6, 0x22, 0xa4, 0xd4, 0x7a, 0x26, 0xa2,
      0x84, 0x7d, 0xe1, 0x09, 0x6d, 0x6b, 0xf5, 0xc8,
      0x57, 0xa5, 0x6c, 0x67, 0x42, 0xfa, 0x08, 0x9e,
      0xa7, 0x2c, 0xd4, 0x69, 0x69, 0x06, 0xca, 0x1a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_msgs_srvs__msg__IRSensorData__TYPE_NAME[] = "custom_msgs_srvs/msg/IRSensorData";

// Define type names, field names, and default values
static char custom_msgs_srvs__msg__IRSensorData__FIELD_NAME__distances[] = "distances";

static rosidl_runtime_c__type_description__Field custom_msgs_srvs__msg__IRSensorData__FIELDS[] = {
  {
    {custom_msgs_srvs__msg__IRSensorData__FIELD_NAME__distances, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      180,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs_srvs__msg__IRSensorData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs_srvs__msg__IRSensorData__TYPE_NAME, 33, 33},
      {custom_msgs_srvs__msg__IRSensorData__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[180] distances";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs_srvs__msg__IRSensorData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs_srvs__msg__IRSensorData__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 22, 22},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs_srvs__msg__IRSensorData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs_srvs__msg__IRSensorData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
