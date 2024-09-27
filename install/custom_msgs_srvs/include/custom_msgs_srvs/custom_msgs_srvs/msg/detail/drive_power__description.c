// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_msgs_srvs:msg/DrivePower.idl
// generated code does not contain a copyright notice

#include "custom_msgs_srvs/msg/detail/drive_power__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_type_hash_t *
custom_msgs_srvs__msg__DrivePower__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0x54, 0xf7, 0x3f, 0xa5, 0x29, 0x40, 0x87,
      0x55, 0xdf, 0x5e, 0x81, 0xbe, 0x5a, 0x0c, 0xb1,
      0xfb, 0x0c, 0x32, 0xa5, 0x7b, 0x04, 0x02, 0xdb,
      0x56, 0x71, 0x75, 0x51, 0x44, 0x71, 0xb1, 0x94,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_msgs_srvs__msg__DrivePower__TYPE_NAME[] = "custom_msgs_srvs/msg/DrivePower";

// Define type names, field names, and default values
static char custom_msgs_srvs__msg__DrivePower__FIELD_NAME__left_power[] = "left_power";
static char custom_msgs_srvs__msg__DrivePower__FIELD_NAME__right_power[] = "right_power";

static rosidl_runtime_c__type_description__Field custom_msgs_srvs__msg__DrivePower__FIELDS[] = {
  {
    {custom_msgs_srvs__msg__DrivePower__FIELD_NAME__left_power, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs_srvs__msg__DrivePower__FIELD_NAME__right_power, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs_srvs__msg__DrivePower__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs_srvs__msg__DrivePower__TYPE_NAME, 31, 31},
      {custom_msgs_srvs__msg__DrivePower__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 left_power\n"
  "float64 right_power";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs_srvs__msg__DrivePower__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs_srvs__msg__DrivePower__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs_srvs__msg__DrivePower__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs_srvs__msg__DrivePower__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
