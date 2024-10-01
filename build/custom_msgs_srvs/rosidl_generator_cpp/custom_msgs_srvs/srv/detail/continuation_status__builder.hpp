// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs_srvs:srv/ContinuationStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/srv/continuation_status.hpp"


#ifndef CUSTOM_MSGS_SRVS__SRV__DETAIL__CONTINUATION_STATUS__BUILDER_HPP_
#define CUSTOM_MSGS_SRVS__SRV__DETAIL__CONTINUATION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs_srvs/srv/detail/continuation_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_ContinuationStatus_Request_nada
{
public:
  Init_ContinuationStatus_Request_nada()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs_srvs::srv::ContinuationStatus_Request nada(::custom_msgs_srvs::srv::ContinuationStatus_Request::_nada_type arg)
  {
    msg_.nada = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_srvs::srv::ContinuationStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::srv::ContinuationStatus_Request>()
{
  return custom_msgs_srvs::srv::builder::Init_ContinuationStatus_Request_nada();
}

}  // namespace custom_msgs_srvs


namespace custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_ContinuationStatus_Response_can_continue
{
public:
  Init_ContinuationStatus_Response_can_continue()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs_srvs::srv::ContinuationStatus_Response can_continue(::custom_msgs_srvs::srv::ContinuationStatus_Response::_can_continue_type arg)
  {
    msg_.can_continue = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_srvs::srv::ContinuationStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::srv::ContinuationStatus_Response>()
{
  return custom_msgs_srvs::srv::builder::Init_ContinuationStatus_Response_can_continue();
}

}  // namespace custom_msgs_srvs


namespace custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_ContinuationStatus_Event_response
{
public:
  explicit Init_ContinuationStatus_Event_response(::custom_msgs_srvs::srv::ContinuationStatus_Event & msg)
  : msg_(msg)
  {}
  ::custom_msgs_srvs::srv::ContinuationStatus_Event response(::custom_msgs_srvs::srv::ContinuationStatus_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_srvs::srv::ContinuationStatus_Event msg_;
};

class Init_ContinuationStatus_Event_request
{
public:
  explicit Init_ContinuationStatus_Event_request(::custom_msgs_srvs::srv::ContinuationStatus_Event & msg)
  : msg_(msg)
  {}
  Init_ContinuationStatus_Event_response request(::custom_msgs_srvs::srv::ContinuationStatus_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ContinuationStatus_Event_response(msg_);
  }

private:
  ::custom_msgs_srvs::srv::ContinuationStatus_Event msg_;
};

class Init_ContinuationStatus_Event_info
{
public:
  Init_ContinuationStatus_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContinuationStatus_Event_request info(::custom_msgs_srvs::srv::ContinuationStatus_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ContinuationStatus_Event_request(msg_);
  }

private:
  ::custom_msgs_srvs::srv::ContinuationStatus_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::srv::ContinuationStatus_Event>()
{
  return custom_msgs_srvs::srv::builder::Init_ContinuationStatus_Event_info();
}

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__SRV__DETAIL__CONTINUATION_STATUS__BUILDER_HPP_
