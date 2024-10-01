// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs_srvs:msg/IRSensorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/msg/ir_sensor_data.hpp"


#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__STRUCT_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__msg__IRSensorData __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__msg__IRSensorData __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IRSensorData_
{
  using Type = IRSensorData_<ContainerAllocator>;

  explicit IRSensorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 180>::iterator, double>(this->distances.begin(), this->distances.end(), 0.0);
    }
  }

  explicit IRSensorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : distances(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 180>::iterator, double>(this->distances.begin(), this->distances.end(), 0.0);
    }
  }

  // field types and members
  using _distances_type =
    std::array<double, 180>;
  _distances_type distances;

  // setters for named parameter idiom
  Type & set__distances(
    const std::array<double, 180> & _arg)
  {
    this->distances = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_srvs::msg::IRSensorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::msg::IRSensorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::msg::IRSensorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::msg::IRSensorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::msg::IRSensorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::msg::IRSensorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::msg::IRSensorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::msg::IRSensorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::msg::IRSensorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::msg::IRSensorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__msg__IRSensorData
    std::shared_ptr<custom_msgs_srvs::msg::IRSensorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__msg__IRSensorData
    std::shared_ptr<custom_msgs_srvs::msg::IRSensorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IRSensorData_ & other) const
  {
    if (this->distances != other.distances) {
      return false;
    }
    return true;
  }
  bool operator!=(const IRSensorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IRSensorData_

// alias to use template instance with default allocator
using IRSensorData =
  custom_msgs_srvs::msg::IRSensorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__IR_SENSOR_DATA__STRUCT_HPP_
