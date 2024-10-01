// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs_srvs:srv/LightStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "custom_msgs_srvs/srv/detail/light_status__functions.h"
#include "custom_msgs_srvs/srv/detail/light_status__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace custom_msgs_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LightStatus_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LightStatus_Request_type_support_ids_t;

static const _LightStatus_Request_type_support_ids_t _LightStatus_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LightStatus_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LightStatus_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LightStatus_Request_type_support_symbol_names_t _LightStatus_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs_srvs, srv, LightStatus_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs_srvs, srv, LightStatus_Request)),
  }
};

typedef struct _LightStatus_Request_type_support_data_t
{
  void * data[2];
} _LightStatus_Request_type_support_data_t;

static _LightStatus_Request_type_support_data_t _LightStatus_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LightStatus_Request_message_typesupport_map = {
  2,
  "custom_msgs_srvs",
  &_LightStatus_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LightStatus_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LightStatus_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LightStatus_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LightStatus_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &custom_msgs_srvs__srv__LightStatus_Request__get_type_hash,
  &custom_msgs_srvs__srv__LightStatus_Request__get_type_description,
  &custom_msgs_srvs__srv__LightStatus_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace custom_msgs_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs_srvs::srv::LightStatus_Request>()
{
  return &::custom_msgs_srvs::srv::rosidl_typesupport_cpp::LightStatus_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_msgs_srvs, srv, LightStatus_Request)() {
  return get_message_type_support_handle<custom_msgs_srvs::srv::LightStatus_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_msgs_srvs/srv/detail/light_status__functions.h"
// already included above
// #include "custom_msgs_srvs/srv/detail/light_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_msgs_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LightStatus_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LightStatus_Response_type_support_ids_t;

static const _LightStatus_Response_type_support_ids_t _LightStatus_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LightStatus_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LightStatus_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LightStatus_Response_type_support_symbol_names_t _LightStatus_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs_srvs, srv, LightStatus_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs_srvs, srv, LightStatus_Response)),
  }
};

typedef struct _LightStatus_Response_type_support_data_t
{
  void * data[2];
} _LightStatus_Response_type_support_data_t;

static _LightStatus_Response_type_support_data_t _LightStatus_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LightStatus_Response_message_typesupport_map = {
  2,
  "custom_msgs_srvs",
  &_LightStatus_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LightStatus_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LightStatus_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LightStatus_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LightStatus_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &custom_msgs_srvs__srv__LightStatus_Response__get_type_hash,
  &custom_msgs_srvs__srv__LightStatus_Response__get_type_description,
  &custom_msgs_srvs__srv__LightStatus_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace custom_msgs_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs_srvs::srv::LightStatus_Response>()
{
  return &::custom_msgs_srvs::srv::rosidl_typesupport_cpp::LightStatus_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_msgs_srvs, srv, LightStatus_Response)() {
  return get_message_type_support_handle<custom_msgs_srvs::srv::LightStatus_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_msgs_srvs/srv/detail/light_status__functions.h"
// already included above
// #include "custom_msgs_srvs/srv/detail/light_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_msgs_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LightStatus_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LightStatus_Event_type_support_ids_t;

static const _LightStatus_Event_type_support_ids_t _LightStatus_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LightStatus_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LightStatus_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LightStatus_Event_type_support_symbol_names_t _LightStatus_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs_srvs, srv, LightStatus_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs_srvs, srv, LightStatus_Event)),
  }
};

typedef struct _LightStatus_Event_type_support_data_t
{
  void * data[2];
} _LightStatus_Event_type_support_data_t;

static _LightStatus_Event_type_support_data_t _LightStatus_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LightStatus_Event_message_typesupport_map = {
  2,
  "custom_msgs_srvs",
  &_LightStatus_Event_message_typesupport_ids.typesupport_identifier[0],
  &_LightStatus_Event_message_typesupport_symbol_names.symbol_name[0],
  &_LightStatus_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LightStatus_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LightStatus_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &custom_msgs_srvs__srv__LightStatus_Event__get_type_hash,
  &custom_msgs_srvs__srv__LightStatus_Event__get_type_description,
  &custom_msgs_srvs__srv__LightStatus_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace custom_msgs_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs_srvs::srv::LightStatus_Event>()
{
  return &::custom_msgs_srvs::srv::rosidl_typesupport_cpp::LightStatus_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_msgs_srvs, srv, LightStatus_Event)() {
  return get_message_type_support_handle<custom_msgs_srvs::srv::LightStatus_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "custom_msgs_srvs/srv/detail/light_status__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_msgs_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LightStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LightStatus_type_support_ids_t;

static const _LightStatus_type_support_ids_t _LightStatus_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LightStatus_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LightStatus_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LightStatus_type_support_symbol_names_t _LightStatus_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs_srvs, srv, LightStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs_srvs, srv, LightStatus)),
  }
};

typedef struct _LightStatus_type_support_data_t
{
  void * data[2];
} _LightStatus_type_support_data_t;

static _LightStatus_type_support_data_t _LightStatus_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LightStatus_service_typesupport_map = {
  2,
  "custom_msgs_srvs",
  &_LightStatus_service_typesupport_ids.typesupport_identifier[0],
  &_LightStatus_service_typesupport_symbol_names.symbol_name[0],
  &_LightStatus_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LightStatus_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LightStatus_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<custom_msgs_srvs::srv::LightStatus_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<custom_msgs_srvs::srv::LightStatus_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<custom_msgs_srvs::srv::LightStatus_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<custom_msgs_srvs::srv::LightStatus>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<custom_msgs_srvs::srv::LightStatus>,
  &custom_msgs_srvs__srv__LightStatus__get_type_hash,
  &custom_msgs_srvs__srv__LightStatus__get_type_description,
  &custom_msgs_srvs__srv__LightStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace custom_msgs_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<custom_msgs_srvs::srv::LightStatus>()
{
  return &::custom_msgs_srvs::srv::rosidl_typesupport_cpp::LightStatus_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_msgs_srvs, srv, LightStatus)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<custom_msgs_srvs::srv::LightStatus>();
}

#ifdef __cplusplus
}
#endif
