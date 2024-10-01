// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs_srvs:msg/DrivePower.idl
// generated code does not contain a copyright notice
#include "custom_msgs_srvs/msg/detail/drive_power__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_msgs_srvs__msg__DrivePower__init(custom_msgs_srvs__msg__DrivePower * msg)
{
  if (!msg) {
    return false;
  }
  // left_power
  // right_power
  return true;
}

void
custom_msgs_srvs__msg__DrivePower__fini(custom_msgs_srvs__msg__DrivePower * msg)
{
  if (!msg) {
    return;
  }
  // left_power
  // right_power
}

bool
custom_msgs_srvs__msg__DrivePower__are_equal(const custom_msgs_srvs__msg__DrivePower * lhs, const custom_msgs_srvs__msg__DrivePower * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_power
  if (lhs->left_power != rhs->left_power) {
    return false;
  }
  // right_power
  if (lhs->right_power != rhs->right_power) {
    return false;
  }
  return true;
}

bool
custom_msgs_srvs__msg__DrivePower__copy(
  const custom_msgs_srvs__msg__DrivePower * input,
  custom_msgs_srvs__msg__DrivePower * output)
{
  if (!input || !output) {
    return false;
  }
  // left_power
  output->left_power = input->left_power;
  // right_power
  output->right_power = input->right_power;
  return true;
}

custom_msgs_srvs__msg__DrivePower *
custom_msgs_srvs__msg__DrivePower__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs_srvs__msg__DrivePower * msg = (custom_msgs_srvs__msg__DrivePower *)allocator.allocate(sizeof(custom_msgs_srvs__msg__DrivePower), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs_srvs__msg__DrivePower));
  bool success = custom_msgs_srvs__msg__DrivePower__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs_srvs__msg__DrivePower__destroy(custom_msgs_srvs__msg__DrivePower * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs_srvs__msg__DrivePower__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs_srvs__msg__DrivePower__Sequence__init(custom_msgs_srvs__msg__DrivePower__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs_srvs__msg__DrivePower * data = NULL;

  if (size) {
    data = (custom_msgs_srvs__msg__DrivePower *)allocator.zero_allocate(size, sizeof(custom_msgs_srvs__msg__DrivePower), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs_srvs__msg__DrivePower__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs_srvs__msg__DrivePower__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_msgs_srvs__msg__DrivePower__Sequence__fini(custom_msgs_srvs__msg__DrivePower__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs_srvs__msg__DrivePower__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_msgs_srvs__msg__DrivePower__Sequence *
custom_msgs_srvs__msg__DrivePower__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs_srvs__msg__DrivePower__Sequence * array = (custom_msgs_srvs__msg__DrivePower__Sequence *)allocator.allocate(sizeof(custom_msgs_srvs__msg__DrivePower__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs_srvs__msg__DrivePower__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs_srvs__msg__DrivePower__Sequence__destroy(custom_msgs_srvs__msg__DrivePower__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs_srvs__msg__DrivePower__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs_srvs__msg__DrivePower__Sequence__are_equal(const custom_msgs_srvs__msg__DrivePower__Sequence * lhs, const custom_msgs_srvs__msg__DrivePower__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs_srvs__msg__DrivePower__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs_srvs__msg__DrivePower__Sequence__copy(
  const custom_msgs_srvs__msg__DrivePower__Sequence * input,
  custom_msgs_srvs__msg__DrivePower__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs_srvs__msg__DrivePower);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs_srvs__msg__DrivePower * data =
      (custom_msgs_srvs__msg__DrivePower *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs_srvs__msg__DrivePower__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs_srvs__msg__DrivePower__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs_srvs__msg__DrivePower__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
