// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs_srvs:msg/DrivePower.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/msg/drive_power.hpp"


#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__DRIVE_POWER__STRUCT_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__DRIVE_POWER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__msg__DrivePower __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__msg__DrivePower __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DrivePower_
{
  using Type = DrivePower_<ContainerAllocator>;

  explicit DrivePower_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_power = 0.0;
      this->right_power = 0.0;
    }
  }

  explicit DrivePower_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_power = 0.0;
      this->right_power = 0.0;
    }
  }

  // field types and members
  using _left_power_type =
    double;
  _left_power_type left_power;
  using _right_power_type =
    double;
  _right_power_type right_power;

  // setters for named parameter idiom
  Type & set__left_power(
    const double & _arg)
  {
    this->left_power = _arg;
    return *this;
  }
  Type & set__right_power(
    const double & _arg)
  {
    this->right_power = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_srvs::msg::DrivePower_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::msg::DrivePower_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::msg::DrivePower_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::msg::DrivePower_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::msg::DrivePower_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::msg::DrivePower_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::msg::DrivePower_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::msg::DrivePower_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::msg::DrivePower_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::msg::DrivePower_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__msg__DrivePower
    std::shared_ptr<custom_msgs_srvs::msg::DrivePower_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__msg__DrivePower
    std::shared_ptr<custom_msgs_srvs::msg::DrivePower_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrivePower_ & other) const
  {
    if (this->left_power != other.left_power) {
      return false;
    }
    if (this->right_power != other.right_power) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrivePower_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrivePower_

// alias to use template instance with default allocator
using DrivePower =
  custom_msgs_srvs::msg::DrivePower_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__DRIVE_POWER__STRUCT_HPP_
