// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from custom_msgs_srvs:srv/LightStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/srv/light_status.h"


#ifndef CUSTOM_MSGS_SRVS__SRV__DETAIL__LIGHT_STATUS__TYPE_SUPPORT_H_
#define CUSTOM_MSGS_SRVS__SRV__DETAIL__LIGHT_STATUS__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "custom_msgs_srvs/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  custom_msgs_srvs,
  srv,
  LightStatus_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  custom_msgs_srvs,
  srv,
  LightStatus_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  custom_msgs_srvs,
  srv,
  LightStatus_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  custom_msgs_srvs,
  srv,
  LightStatus
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  custom_msgs_srvs,
  srv,
  LightStatus
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  custom_msgs_srvs,
  srv,
  LightStatus
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_SRVS__SRV__DETAIL__LIGHT_STATUS__TYPE_SUPPORT_H_
