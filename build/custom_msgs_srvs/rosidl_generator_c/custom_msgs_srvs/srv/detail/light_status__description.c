// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_msgs_srvs:srv/LightStatus.idl
// generated code does not contain a copyright notice

#include "custom_msgs_srvs/srv/detail/light_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_type_hash_t *
custom_msgs_srvs__srv__LightStatus__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0x20, 0xda, 0x65, 0x51, 0x42, 0x0b, 0xb4,
      0x2e, 0xce, 0x93, 0x74, 0x0c, 0xcd, 0x52, 0x16,
      0x39, 0x2d, 0xfd, 0xdb, 0x24, 0xe6, 0xd8, 0x61,
      0x30, 0xda, 0xed, 0x5c, 0x11, 0x81, 0x3d, 0xed,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_type_hash_t *
custom_msgs_srvs__srv__LightStatus_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0xa8, 0x76, 0x9d, 0xb9, 0xc7, 0x8d, 0x4c,
      0xa0, 0xad, 0x4b, 0x7f, 0x19, 0x76, 0x90, 0xe3,
      0x74, 0xc3, 0x9c, 0x62, 0x0b, 0x85, 0xb6, 0x39,
      0x15, 0x5f, 0xcd, 0x16, 0x72, 0xe8, 0x89, 0x54,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_type_hash_t *
custom_msgs_srvs__srv__LightStatus_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0x37, 0xb3, 0xc1, 0x32, 0x89, 0x9d, 0x18,
      0xb5, 0x9a, 0x6d, 0xbc, 0xfc, 0x25, 0x1a, 0x71,
      0xde, 0x02, 0x4a, 0x78, 0x2c, 0x32, 0xe0, 0x41,
      0xff, 0xbb, 0xf0, 0xc5, 0x1a, 0x34, 0x79, 0xda,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_type_hash_t *
custom_msgs_srvs__srv__LightStatus_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0x5c, 0xe7, 0x49, 0x90, 0xf2, 0x17, 0x27,
      0x3a, 0x67, 0x76, 0x5a, 0x73, 0x9d, 0x7c, 0x54,
      0x4a, 0x98, 0xab, 0x51, 0x34, 0xcb, 0xbd, 0x7c,
      0xc2, 0xfc, 0x14, 0x5e, 0x34, 0xec, 0x14, 0x98,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char custom_msgs_srvs__srv__LightStatus__TYPE_NAME[] = "custom_msgs_srvs/srv/LightStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char custom_msgs_srvs__srv__LightStatus_Event__TYPE_NAME[] = "custom_msgs_srvs/srv/LightStatus_Event";
static char custom_msgs_srvs__srv__LightStatus_Request__TYPE_NAME[] = "custom_msgs_srvs/srv/LightStatus_Request";
static char custom_msgs_srvs__srv__LightStatus_Response__TYPE_NAME[] = "custom_msgs_srvs/srv/LightStatus_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char custom_msgs_srvs__srv__LightStatus__FIELD_NAME__request_message[] = "request_message";
static char custom_msgs_srvs__srv__LightStatus__FIELD_NAME__response_message[] = "response_message";
static char custom_msgs_srvs__srv__LightStatus__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field custom_msgs_srvs__srv__LightStatus__FIELDS[] = {
  {
    {custom_msgs_srvs__srv__LightStatus__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_msgs_srvs__srv__LightStatus_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs_srvs__srv__LightStatus__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_msgs_srvs__srv__LightStatus_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs_srvs__srv__LightStatus__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_msgs_srvs__srv__LightStatus_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_msgs_srvs__srv__LightStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_msgs_srvs__srv__LightStatus_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {custom_msgs_srvs__srv__LightStatus_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {custom_msgs_srvs__srv__LightStatus_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs_srvs__srv__LightStatus__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs_srvs__srv__LightStatus__TYPE_NAME, 32, 32},
      {custom_msgs_srvs__srv__LightStatus__FIELDS, 3, 3},
    },
    {custom_msgs_srvs__srv__LightStatus__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = custom_msgs_srvs__srv__LightStatus_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_msgs_srvs__srv__LightStatus_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = custom_msgs_srvs__srv__LightStatus_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_msgs_srvs__srv__LightStatus_Request__FIELD_NAME__light_status[] = "light_status";

static rosidl_runtime_c__type_description__Field custom_msgs_srvs__srv__LightStatus_Request__FIELDS[] = {
  {
    {custom_msgs_srvs__srv__LightStatus_Request__FIELD_NAME__light_status, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs_srvs__srv__LightStatus_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs_srvs__srv__LightStatus_Request__TYPE_NAME, 40, 40},
      {custom_msgs_srvs__srv__LightStatus_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_msgs_srvs__srv__LightStatus_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field custom_msgs_srvs__srv__LightStatus_Response__FIELDS[] = {
  {
    {custom_msgs_srvs__srv__LightStatus_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs_srvs__srv__LightStatus_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs_srvs__srv__LightStatus_Response__TYPE_NAME, 41, 41},
      {custom_msgs_srvs__srv__LightStatus_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_msgs_srvs__srv__LightStatus_Event__FIELD_NAME__info[] = "info";
static char custom_msgs_srvs__srv__LightStatus_Event__FIELD_NAME__request[] = "request";
static char custom_msgs_srvs__srv__LightStatus_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field custom_msgs_srvs__srv__LightStatus_Event__FIELDS[] = {
  {
    {custom_msgs_srvs__srv__LightStatus_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs_srvs__srv__LightStatus_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_msgs_srvs__srv__LightStatus_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs_srvs__srv__LightStatus_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_msgs_srvs__srv__LightStatus_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_msgs_srvs__srv__LightStatus_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_msgs_srvs__srv__LightStatus_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {custom_msgs_srvs__srv__LightStatus_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs_srvs__srv__LightStatus_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs_srvs__srv__LightStatus_Event__TYPE_NAME, 38, 38},
      {custom_msgs_srvs__srv__LightStatus_Event__FIELDS, 3, 3},
    },
    {custom_msgs_srvs__srv__LightStatus_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = custom_msgs_srvs__srv__LightStatus_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_msgs_srvs__srv__LightStatus_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 DONE = 0\n"
  "int8 NOT_DONE = 1\n"
  "int8 light_status\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs_srvs__srv__LightStatus__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs_srvs__srv__LightStatus__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs_srvs__srv__LightStatus_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs_srvs__srv__LightStatus_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs_srvs__srv__LightStatus_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs_srvs__srv__LightStatus_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_msgs_srvs__srv__LightStatus_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs_srvs__srv__LightStatus_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs_srvs__srv__LightStatus__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs_srvs__srv__LightStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *custom_msgs_srvs__srv__LightStatus_Event__get_individual_type_description_source(NULL);
    sources[3] = *custom_msgs_srvs__srv__LightStatus_Request__get_individual_type_description_source(NULL);
    sources[4] = *custom_msgs_srvs__srv__LightStatus_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs_srvs__srv__LightStatus_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs_srvs__srv__LightStatus_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs_srvs__srv__LightStatus_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs_srvs__srv__LightStatus_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs_srvs__srv__LightStatus_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs_srvs__srv__LightStatus_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *custom_msgs_srvs__srv__LightStatus_Request__get_individual_type_description_source(NULL);
    sources[3] = *custom_msgs_srvs__srv__LightStatus_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
