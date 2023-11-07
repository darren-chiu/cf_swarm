// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crazyflie_interfaces:srv/Stop.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__SRV__DETAIL__STOP__BUILDER_HPP_
#define CRAZYFLIE_INTERFACES__SRV__DETAIL__STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crazyflie_interfaces/srv/detail/stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crazyflie_interfaces
{

namespace srv
{

namespace builder
{

class Init_Stop_Request_group_mask
{
public:
  Init_Stop_Request_group_mask()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::crazyflie_interfaces::srv::Stop_Request group_mask(::crazyflie_interfaces::srv::Stop_Request::_group_mask_type arg)
  {
    msg_.group_mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazyflie_interfaces::srv::Stop_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_interfaces::srv::Stop_Request>()
{
  return crazyflie_interfaces::srv::builder::Init_Stop_Request_group_mask();
}

}  // namespace crazyflie_interfaces


namespace crazyflie_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_interfaces::srv::Stop_Response>()
{
  return ::crazyflie_interfaces::srv::Stop_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace crazyflie_interfaces


namespace crazyflie_interfaces
{

namespace srv
{

namespace builder
{

class Init_Stop_Event_response
{
public:
  explicit Init_Stop_Event_response(::crazyflie_interfaces::srv::Stop_Event & msg)
  : msg_(msg)
  {}
  ::crazyflie_interfaces::srv::Stop_Event response(::crazyflie_interfaces::srv::Stop_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazyflie_interfaces::srv::Stop_Event msg_;
};

class Init_Stop_Event_request
{
public:
  explicit Init_Stop_Event_request(::crazyflie_interfaces::srv::Stop_Event & msg)
  : msg_(msg)
  {}
  Init_Stop_Event_response request(::crazyflie_interfaces::srv::Stop_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Stop_Event_response(msg_);
  }

private:
  ::crazyflie_interfaces::srv::Stop_Event msg_;
};

class Init_Stop_Event_info
{
public:
  Init_Stop_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Stop_Event_request info(::crazyflie_interfaces::srv::Stop_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Stop_Event_request(msg_);
  }

private:
  ::crazyflie_interfaces::srv::Stop_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_interfaces::srv::Stop_Event>()
{
  return crazyflie_interfaces::srv::builder::Init_Stop_Event_info();
}

}  // namespace crazyflie_interfaces

#endif  // CRAZYFLIE_INTERFACES__SRV__DETAIL__STOP__BUILDER_HPP_
