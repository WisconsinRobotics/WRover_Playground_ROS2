// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs_srvs:srv/ContinuationStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/srv/continuation_status.h"


#ifndef CUSTOM_MSGS_SRVS__SRV__DETAIL__CONTINUATION_STATUS__STRUCT_H_
#define CUSTOM_MSGS_SRVS__SRV__DETAIL__CONTINUATION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ContinuationStatus in the package custom_msgs_srvs.
typedef struct custom_msgs_srvs__srv__ContinuationStatus_Request
{
  bool nada;
} custom_msgs_srvs__srv__ContinuationStatus_Request;

// Struct for a sequence of custom_msgs_srvs__srv__ContinuationStatus_Request.
typedef struct custom_msgs_srvs__srv__ContinuationStatus_Request__Sequence
{
  custom_msgs_srvs__srv__ContinuationStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_srvs__srv__ContinuationStatus_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ContinuationStatus in the package custom_msgs_srvs.
typedef struct custom_msgs_srvs__srv__ContinuationStatus_Response
{
  bool can_continue;
} custom_msgs_srvs__srv__ContinuationStatus_Response;

// Struct for a sequence of custom_msgs_srvs__srv__ContinuationStatus_Response.
typedef struct custom_msgs_srvs__srv__ContinuationStatus_Response__Sequence
{
  custom_msgs_srvs__srv__ContinuationStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_srvs__srv__ContinuationStatus_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  custom_msgs_srvs__srv__ContinuationStatus_Event__request__MAX_SIZE = 1
};
// response
enum
{
  custom_msgs_srvs__srv__ContinuationStatus_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ContinuationStatus in the package custom_msgs_srvs.
typedef struct custom_msgs_srvs__srv__ContinuationStatus_Event
{
  service_msgs__msg__ServiceEventInfo info;
  custom_msgs_srvs__srv__ContinuationStatus_Request__Sequence request;
  custom_msgs_srvs__srv__ContinuationStatus_Response__Sequence response;
} custom_msgs_srvs__srv__ContinuationStatus_Event;

// Struct for a sequence of custom_msgs_srvs__srv__ContinuationStatus_Event.
typedef struct custom_msgs_srvs__srv__ContinuationStatus_Event__Sequence
{
  custom_msgs_srvs__srv__ContinuationStatus_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_srvs__srv__ContinuationStatus_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_SRVS__SRV__DETAIL__CONTINUATION_STATUS__STRUCT_H_
