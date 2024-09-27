// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs_srvs:srv/LightStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/srv/light_status.hpp"


#ifndef CUSTOM_MSGS_SRVS__SRV__DETAIL__LIGHT_STATUS__STRUCT_HPP_
#define CUSTOM_MSGS_SRVS__SRV__DETAIL__LIGHT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__srv__LightStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__srv__LightStatus_Request __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LightStatus_Request_
{
  using Type = LightStatus_Request_<ContainerAllocator>;

  explicit LightStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->light_status = 0;
    }
  }

  explicit LightStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->light_status = 0;
    }
  }

  // field types and members
  using _light_status_type =
    int8_t;
  _light_status_type light_status;

  // setters for named parameter idiom
  Type & set__light_status(
    const int8_t & _arg)
  {
    this->light_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t DONE =
    0;
  static constexpr int8_t NOT_DONE =
    1;

  // pointer types
  using RawPtr =
    custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__srv__LightStatus_Request
    std::shared_ptr<custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__srv__LightStatus_Request
    std::shared_ptr<custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightStatus_Request_ & other) const
  {
    if (this->light_status != other.light_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightStatus_Request_

// alias to use template instance with default allocator
using LightStatus_Request =
  custom_msgs_srvs::srv::LightStatus_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t LightStatus_Request_<ContainerAllocator>::DONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t LightStatus_Request_<ContainerAllocator>::NOT_DONE;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace custom_msgs_srvs


#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__srv__LightStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__srv__LightStatus_Response __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LightStatus_Response_
{
  using Type = LightStatus_Response_<ContainerAllocator>;

  explicit LightStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit LightStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__srv__LightStatus_Response
    std::shared_ptr<custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__srv__LightStatus_Response
    std::shared_ptr<custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightStatus_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightStatus_Response_

// alias to use template instance with default allocator
using LightStatus_Response =
  custom_msgs_srvs::srv::LightStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs_srvs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__srv__LightStatus_Event __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__srv__LightStatus_Event __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LightStatus_Event_
{
  using Type = LightStatus_Event_<ContainerAllocator>;

  explicit LightStatus_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit LightStatus_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs_srvs::srv::LightStatus_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs_srvs::srv::LightStatus_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_srvs::srv::LightStatus_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::srv::LightStatus_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::LightStatus_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::LightStatus_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::LightStatus_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::LightStatus_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::LightStatus_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::LightStatus_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::LightStatus_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::LightStatus_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__srv__LightStatus_Event
    std::shared_ptr<custom_msgs_srvs::srv::LightStatus_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__srv__LightStatus_Event
    std::shared_ptr<custom_msgs_srvs::srv::LightStatus_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightStatus_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightStatus_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightStatus_Event_

// alias to use template instance with default allocator
using LightStatus_Event =
  custom_msgs_srvs::srv::LightStatus_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs_srvs

namespace custom_msgs_srvs
{

namespace srv
{

struct LightStatus
{
  using Request = custom_msgs_srvs::srv::LightStatus_Request;
  using Response = custom_msgs_srvs::srv::LightStatus_Response;
  using Event = custom_msgs_srvs::srv::LightStatus_Event;
};

}  // namespace srv

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__SRV__DETAIL__LIGHT_STATUS__STRUCT_HPP_
