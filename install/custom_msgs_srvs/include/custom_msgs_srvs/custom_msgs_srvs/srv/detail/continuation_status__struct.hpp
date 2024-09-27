// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs_srvs:srv/ContinuationStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/srv/continuation_status.hpp"


#ifndef CUSTOM_MSGS_SRVS__SRV__DETAIL__CONTINUATION_STATUS__STRUCT_HPP_
#define CUSTOM_MSGS_SRVS__SRV__DETAIL__CONTINUATION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__srv__ContinuationStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__srv__ContinuationStatus_Request __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ContinuationStatus_Request_
{
  using Type = ContinuationStatus_Request_<ContainerAllocator>;

  explicit ContinuationStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nada = false;
    }
  }

  explicit ContinuationStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nada = false;
    }
  }

  // field types and members
  using _nada_type =
    bool;
  _nada_type nada;

  // setters for named parameter idiom
  Type & set__nada(
    const bool & _arg)
  {
    this->nada = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__srv__ContinuationStatus_Request
    std::shared_ptr<custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__srv__ContinuationStatus_Request
    std::shared_ptr<custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContinuationStatus_Request_ & other) const
  {
    if (this->nada != other.nada) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContinuationStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContinuationStatus_Request_

// alias to use template instance with default allocator
using ContinuationStatus_Request =
  custom_msgs_srvs::srv::ContinuationStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs_srvs


#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__srv__ContinuationStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__srv__ContinuationStatus_Response __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ContinuationStatus_Response_
{
  using Type = ContinuationStatus_Response_<ContainerAllocator>;

  explicit ContinuationStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_continue = false;
    }
  }

  explicit ContinuationStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_continue = false;
    }
  }

  // field types and members
  using _can_continue_type =
    bool;
  _can_continue_type can_continue;

  // setters for named parameter idiom
  Type & set__can_continue(
    const bool & _arg)
  {
    this->can_continue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__srv__ContinuationStatus_Response
    std::shared_ptr<custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__srv__ContinuationStatus_Response
    std::shared_ptr<custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContinuationStatus_Response_ & other) const
  {
    if (this->can_continue != other.can_continue) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContinuationStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContinuationStatus_Response_

// alias to use template instance with default allocator
using ContinuationStatus_Response =
  custom_msgs_srvs::srv::ContinuationStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs_srvs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__srv__ContinuationStatus_Event __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__srv__ContinuationStatus_Event __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ContinuationStatus_Event_
{
  using Type = ContinuationStatus_Event_<ContainerAllocator>;

  explicit ContinuationStatus_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ContinuationStatus_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs_srvs::srv::ContinuationStatus_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs_srvs::srv::ContinuationStatus_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_srvs::srv::ContinuationStatus_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::srv::ContinuationStatus_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::ContinuationStatus_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::ContinuationStatus_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::ContinuationStatus_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::ContinuationStatus_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::ContinuationStatus_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::ContinuationStatus_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::ContinuationStatus_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::ContinuationStatus_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__srv__ContinuationStatus_Event
    std::shared_ptr<custom_msgs_srvs::srv::ContinuationStatus_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__srv__ContinuationStatus_Event
    std::shared_ptr<custom_msgs_srvs::srv::ContinuationStatus_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContinuationStatus_Event_ & other) const
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
  bool operator!=(const ContinuationStatus_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContinuationStatus_Event_

// alias to use template instance with default allocator
using ContinuationStatus_Event =
  custom_msgs_srvs::srv::ContinuationStatus_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs_srvs

namespace custom_msgs_srvs
{

namespace srv
{

struct ContinuationStatus
{
  using Request = custom_msgs_srvs::srv::ContinuationStatus_Request;
  using Response = custom_msgs_srvs::srv::ContinuationStatus_Response;
  using Event = custom_msgs_srvs::srv::ContinuationStatus_Event;
};

}  // namespace srv

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__SRV__DETAIL__CONTINUATION_STATUS__STRUCT_HPP_
