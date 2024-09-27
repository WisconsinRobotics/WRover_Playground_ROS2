// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_msgs_srvs:srv/LightStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/srv/light_status.h"


#ifndef CUSTOM_MSGS_SRVS__SRV__DETAIL__LIGHT_STATUS__FUNCTIONS_H_
#define CUSTOM_MSGS_SRVS__SRV__DETAIL__LIGHT_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msgs_srvs/msg/rosidl_generator_c__visibility_control.h"

#include "custom_msgs_srvs/srv/detail/light_status__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_type_hash_t *
custom_msgs_srvs__srv__LightStatus__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs_srvs__srv__LightStatus__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_runtime_c__type_description__TypeSource *
custom_msgs_srvs__srv__LightStatus__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs_srvs__srv__LightStatus__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/LightStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msgs_srvs__srv__LightStatus_Request
 * )) before or use
 * custom_msgs_srvs__srv__LightStatus_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Request__init(custom_msgs_srvs__srv__LightStatus_Request * msg);

/// Finalize srv/LightStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__srv__LightStatus_Request__fini(custom_msgs_srvs__srv__LightStatus_Request * msg);

/// Create srv/LightStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msgs_srvs__srv__LightStatus_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
custom_msgs_srvs__srv__LightStatus_Request *
custom_msgs_srvs__srv__LightStatus_Request__create(void);

/// Destroy srv/LightStatus message.
/**
 * It calls
 * custom_msgs_srvs__srv__LightStatus_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__srv__LightStatus_Request__destroy(custom_msgs_srvs__srv__LightStatus_Request * msg);

/// Check for srv/LightStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Request__are_equal(const custom_msgs_srvs__srv__LightStatus_Request * lhs, const custom_msgs_srvs__srv__LightStatus_Request * rhs);

/// Copy a srv/LightStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Request__copy(
  const custom_msgs_srvs__srv__LightStatus_Request * input,
  custom_msgs_srvs__srv__LightStatus_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_type_hash_t *
custom_msgs_srvs__srv__LightStatus_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs_srvs__srv__LightStatus_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_runtime_c__type_description__TypeSource *
custom_msgs_srvs__srv__LightStatus_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs_srvs__srv__LightStatus_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/LightStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msgs_srvs__srv__LightStatus_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Request__Sequence__init(custom_msgs_srvs__srv__LightStatus_Request__Sequence * array, size_t size);

/// Finalize array of srv/LightStatus messages.
/**
 * It calls
 * custom_msgs_srvs__srv__LightStatus_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__srv__LightStatus_Request__Sequence__fini(custom_msgs_srvs__srv__LightStatus_Request__Sequence * array);

/// Create array of srv/LightStatus messages.
/**
 * It allocates the memory for the array and calls
 * custom_msgs_srvs__srv__LightStatus_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
custom_msgs_srvs__srv__LightStatus_Request__Sequence *
custom_msgs_srvs__srv__LightStatus_Request__Sequence__create(size_t size);

/// Destroy array of srv/LightStatus messages.
/**
 * It calls
 * custom_msgs_srvs__srv__LightStatus_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__srv__LightStatus_Request__Sequence__destroy(custom_msgs_srvs__srv__LightStatus_Request__Sequence * array);

/// Check for srv/LightStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Request__Sequence__are_equal(const custom_msgs_srvs__srv__LightStatus_Request__Sequence * lhs, const custom_msgs_srvs__srv__LightStatus_Request__Sequence * rhs);

/// Copy an array of srv/LightStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Request__Sequence__copy(
  const custom_msgs_srvs__srv__LightStatus_Request__Sequence * input,
  custom_msgs_srvs__srv__LightStatus_Request__Sequence * output);

/// Initialize srv/LightStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msgs_srvs__srv__LightStatus_Response
 * )) before or use
 * custom_msgs_srvs__srv__LightStatus_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Response__init(custom_msgs_srvs__srv__LightStatus_Response * msg);

/// Finalize srv/LightStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__srv__LightStatus_Response__fini(custom_msgs_srvs__srv__LightStatus_Response * msg);

/// Create srv/LightStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msgs_srvs__srv__LightStatus_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
custom_msgs_srvs__srv__LightStatus_Response *
custom_msgs_srvs__srv__LightStatus_Response__create(void);

/// Destroy srv/LightStatus message.
/**
 * It calls
 * custom_msgs_srvs__srv__LightStatus_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__srv__LightStatus_Response__destroy(custom_msgs_srvs__srv__LightStatus_Response * msg);

/// Check for srv/LightStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Response__are_equal(const custom_msgs_srvs__srv__LightStatus_Response * lhs, const custom_msgs_srvs__srv__LightStatus_Response * rhs);

/// Copy a srv/LightStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Response__copy(
  const custom_msgs_srvs__srv__LightStatus_Response * input,
  custom_msgs_srvs__srv__LightStatus_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_type_hash_t *
custom_msgs_srvs__srv__LightStatus_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs_srvs__srv__LightStatus_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_runtime_c__type_description__TypeSource *
custom_msgs_srvs__srv__LightStatus_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs_srvs__srv__LightStatus_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/LightStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msgs_srvs__srv__LightStatus_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Response__Sequence__init(custom_msgs_srvs__srv__LightStatus_Response__Sequence * array, size_t size);

/// Finalize array of srv/LightStatus messages.
/**
 * It calls
 * custom_msgs_srvs__srv__LightStatus_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__srv__LightStatus_Response__Sequence__fini(custom_msgs_srvs__srv__LightStatus_Response__Sequence * array);

/// Create array of srv/LightStatus messages.
/**
 * It allocates the memory for the array and calls
 * custom_msgs_srvs__srv__LightStatus_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
custom_msgs_srvs__srv__LightStatus_Response__Sequence *
custom_msgs_srvs__srv__LightStatus_Response__Sequence__create(size_t size);

/// Destroy array of srv/LightStatus messages.
/**
 * It calls
 * custom_msgs_srvs__srv__LightStatus_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__srv__LightStatus_Response__Sequence__destroy(custom_msgs_srvs__srv__LightStatus_Response__Sequence * array);

/// Check for srv/LightStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Response__Sequence__are_equal(const custom_msgs_srvs__srv__LightStatus_Response__Sequence * lhs, const custom_msgs_srvs__srv__LightStatus_Response__Sequence * rhs);

/// Copy an array of srv/LightStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Response__Sequence__copy(
  const custom_msgs_srvs__srv__LightStatus_Response__Sequence * input,
  custom_msgs_srvs__srv__LightStatus_Response__Sequence * output);

/// Initialize srv/LightStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msgs_srvs__srv__LightStatus_Event
 * )) before or use
 * custom_msgs_srvs__srv__LightStatus_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Event__init(custom_msgs_srvs__srv__LightStatus_Event * msg);

/// Finalize srv/LightStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__srv__LightStatus_Event__fini(custom_msgs_srvs__srv__LightStatus_Event * msg);

/// Create srv/LightStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msgs_srvs__srv__LightStatus_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
custom_msgs_srvs__srv__LightStatus_Event *
custom_msgs_srvs__srv__LightStatus_Event__create(void);

/// Destroy srv/LightStatus message.
/**
 * It calls
 * custom_msgs_srvs__srv__LightStatus_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__srv__LightStatus_Event__destroy(custom_msgs_srvs__srv__LightStatus_Event * msg);

/// Check for srv/LightStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Event__are_equal(const custom_msgs_srvs__srv__LightStatus_Event * lhs, const custom_msgs_srvs__srv__LightStatus_Event * rhs);

/// Copy a srv/LightStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Event__copy(
  const custom_msgs_srvs__srv__LightStatus_Event * input,
  custom_msgs_srvs__srv__LightStatus_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_type_hash_t *
custom_msgs_srvs__srv__LightStatus_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_runtime_c__type_description__TypeDescription *
custom_msgs_srvs__srv__LightStatus_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_runtime_c__type_description__TypeSource *
custom_msgs_srvs__srv__LightStatus_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs_srvs__srv__LightStatus_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/LightStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msgs_srvs__srv__LightStatus_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Event__Sequence__init(custom_msgs_srvs__srv__LightStatus_Event__Sequence * array, size_t size);

/// Finalize array of srv/LightStatus messages.
/**
 * It calls
 * custom_msgs_srvs__srv__LightStatus_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__srv__LightStatus_Event__Sequence__fini(custom_msgs_srvs__srv__LightStatus_Event__Sequence * array);

/// Create array of srv/LightStatus messages.
/**
 * It allocates the memory for the array and calls
 * custom_msgs_srvs__srv__LightStatus_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
custom_msgs_srvs__srv__LightStatus_Event__Sequence *
custom_msgs_srvs__srv__LightStatus_Event__Sequence__create(size_t size);

/// Destroy array of srv/LightStatus messages.
/**
 * It calls
 * custom_msgs_srvs__srv__LightStatus_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__srv__LightStatus_Event__Sequence__destroy(custom_msgs_srvs__srv__LightStatus_Event__Sequence * array);

/// Check for srv/LightStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Event__Sequence__are_equal(const custom_msgs_srvs__srv__LightStatus_Event__Sequence * lhs, const custom_msgs_srvs__srv__LightStatus_Event__Sequence * rhs);

/// Copy an array of srv/LightStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__srv__LightStatus_Event__Sequence__copy(
  const custom_msgs_srvs__srv__LightStatus_Event__Sequence * input,
  custom_msgs_srvs__srv__LightStatus_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_SRVS__SRV__DETAIL__LIGHT_STATUS__FUNCTIONS_H_