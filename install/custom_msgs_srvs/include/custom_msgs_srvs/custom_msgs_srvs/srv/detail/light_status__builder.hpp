// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs_srvs:srv/LightStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs_srvs/srv/light_status.hpp"


#ifndef CUSTOM_MSGS_SRVS__SRV__DETAIL__LIGHT_STATUS__BUILDER_HPP_
#define CUSTOM_MSGS_SRVS__SRV__DETAIL__LIGHT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs_srvs/srv/detail/light_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_LightStatus_Request_light_status
{
public:
  Init_LightStatus_Request_light_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs_srvs::srv::LightStatus_Request light_status(::custom_msgs_srvs::srv::LightStatus_Request::_light_status_type arg)
  {
    msg_.light_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_srvs::srv::LightStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::srv::LightStatus_Request>()
{
  return custom_msgs_srvs::srv::builder::Init_LightStatus_Request_light_status();
}

}  // namespace custom_msgs_srvs


namespace custom_msgs_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::srv::LightStatus_Response>()
{
  return ::custom_msgs_srvs::srv::LightStatus_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace custom_msgs_srvs


namespace custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_LightStatus_Event_response
{
public:
  explicit Init_LightStatus_Event_response(::custom_msgs_srvs::srv::LightStatus_Event & msg)
  : msg_(msg)
  {}
  ::custom_msgs_srvs::srv::LightStatus_Event response(::custom_msgs_srvs::srv::LightStatus_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_srvs::srv::LightStatus_Event msg_;
};

class Init_LightStatus_Event_request
{
public:
  explicit Init_LightStatus_Event_request(::custom_msgs_srvs::srv::LightStatus_Event & msg)
  : msg_(msg)
  {}
  Init_LightStatus_Event_response request(::custom_msgs_srvs::srv::LightStatus_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LightStatus_Event_response(msg_);
  }

private:
  ::custom_msgs_srvs::srv::LightStatus_Event msg_;
};

class Init_LightStatus_Event_info
{
public:
  Init_LightStatus_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LightStatus_Event_request info(::custom_msgs_srvs::srv::LightStatus_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LightStatus_Event_request(msg_);
  }

private:
  ::custom_msgs_srvs::srv::LightStatus_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::srv::LightStatus_Event>()
{
  return custom_msgs_srvs::srv::builder::Init_LightStatus_Event_info();
}

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__SRV__DETAIL__LIGHT_STATUS__BUILDER_HPP_
