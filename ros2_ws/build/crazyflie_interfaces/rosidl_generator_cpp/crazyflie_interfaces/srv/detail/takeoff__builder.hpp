// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from crazyflie_interfaces:srv/Takeoff.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__SRV__DETAIL__TAKEOFF__BUILDER_HPP_
#define CRAZYFLIE_INTERFACES__SRV__DETAIL__TAKEOFF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "crazyflie_interfaces/srv/detail/takeoff__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace crazyflie_interfaces
{

namespace srv
{

namespace builder
{

class Init_Takeoff_Request_duration
{
public:
  explicit Init_Takeoff_Request_duration(::crazyflie_interfaces::srv::Takeoff_Request & msg)
  : msg_(msg)
  {}
  ::crazyflie_interfaces::srv::Takeoff_Request duration(::crazyflie_interfaces::srv::Takeoff_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazyflie_interfaces::srv::Takeoff_Request msg_;
};

class Init_Takeoff_Request_height
{
public:
  explicit Init_Takeoff_Request_height(::crazyflie_interfaces::srv::Takeoff_Request & msg)
  : msg_(msg)
  {}
  Init_Takeoff_Request_duration height(::crazyflie_interfaces::srv::Takeoff_Request::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Takeoff_Request_duration(msg_);
  }

private:
  ::crazyflie_interfaces::srv::Takeoff_Request msg_;
};

class Init_Takeoff_Request_group_mask
{
public:
  Init_Takeoff_Request_group_mask()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Takeoff_Request_height group_mask(::crazyflie_interfaces::srv::Takeoff_Request::_group_mask_type arg)
  {
    msg_.group_mask = std::move(arg);
    return Init_Takeoff_Request_height(msg_);
  }

private:
  ::crazyflie_interfaces::srv::Takeoff_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_interfaces::srv::Takeoff_Request>()
{
  return crazyflie_interfaces::srv::builder::Init_Takeoff_Request_group_mask();
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
auto build<::crazyflie_interfaces::srv::Takeoff_Response>()
{
  return ::crazyflie_interfaces::srv::Takeoff_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace crazyflie_interfaces


namespace crazyflie_interfaces
{

namespace srv
{

namespace builder
{

class Init_Takeoff_Event_response
{
public:
  explicit Init_Takeoff_Event_response(::crazyflie_interfaces::srv::Takeoff_Event & msg)
  : msg_(msg)
  {}
  ::crazyflie_interfaces::srv::Takeoff_Event response(::crazyflie_interfaces::srv::Takeoff_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::crazyflie_interfaces::srv::Takeoff_Event msg_;
};

class Init_Takeoff_Event_request
{
public:
  explicit Init_Takeoff_Event_request(::crazyflie_interfaces::srv::Takeoff_Event & msg)
  : msg_(msg)
  {}
  Init_Takeoff_Event_response request(::crazyflie_interfaces::srv::Takeoff_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Takeoff_Event_response(msg_);
  }

private:
  ::crazyflie_interfaces::srv::Takeoff_Event msg_;
};

class Init_Takeoff_Event_info
{
public:
  Init_Takeoff_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Takeoff_Event_request info(::crazyflie_interfaces::srv::Takeoff_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Takeoff_Event_request(msg_);
  }

private:
  ::crazyflie_interfaces::srv::Takeoff_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::crazyflie_interfaces::srv::Takeoff_Event>()
{
  return crazyflie_interfaces::srv::builder::Init_Takeoff_Event_info();
}

}  // namespace crazyflie_interfaces

#endif  // CRAZYFLIE_INTERFACES__SRV__DETAIL__TAKEOFF__BUILDER_HPP_
