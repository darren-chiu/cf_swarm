// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crazyflie_interfaces:srv/Stop.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__SRV__DETAIL__STOP__STRUCT_HPP_
#define CRAZYFLIE_INTERFACES__SRV__DETAIL__STOP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__crazyflie_interfaces__srv__Stop_Request __attribute__((deprecated))
#else
# define DEPRECATED__crazyflie_interfaces__srv__Stop_Request __declspec(deprecated)
#endif

namespace crazyflie_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Stop_Request_
{
  using Type = Stop_Request_<ContainerAllocator>;

  explicit Stop_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_mask = 0;
    }
  }

  explicit Stop_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_mask = 0;
    }
  }

  // field types and members
  using _group_mask_type =
    uint8_t;
  _group_mask_type group_mask;

  // setters for named parameter idiom
  Type & set__group_mask(
    const uint8_t & _arg)
  {
    this->group_mask = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crazyflie_interfaces__srv__Stop_Request
    std::shared_ptr<crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crazyflie_interfaces__srv__Stop_Request
    std::shared_ptr<crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stop_Request_ & other) const
  {
    if (this->group_mask != other.group_mask) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stop_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stop_Request_

// alias to use template instance with default allocator
using Stop_Request =
  crazyflie_interfaces::srv::Stop_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crazyflie_interfaces


#ifndef _WIN32
# define DEPRECATED__crazyflie_interfaces__srv__Stop_Response __attribute__((deprecated))
#else
# define DEPRECATED__crazyflie_interfaces__srv__Stop_Response __declspec(deprecated)
#endif

namespace crazyflie_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Stop_Response_
{
  using Type = Stop_Response_<ContainerAllocator>;

  explicit Stop_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Stop_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crazyflie_interfaces__srv__Stop_Response
    std::shared_ptr<crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crazyflie_interfaces__srv__Stop_Response
    std::shared_ptr<crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stop_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stop_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stop_Response_

// alias to use template instance with default allocator
using Stop_Response =
  crazyflie_interfaces::srv::Stop_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crazyflie_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crazyflie_interfaces__srv__Stop_Event __attribute__((deprecated))
#else
# define DEPRECATED__crazyflie_interfaces__srv__Stop_Event __declspec(deprecated)
#endif

namespace crazyflie_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Stop_Event_
{
  using Type = Stop_Event_<ContainerAllocator>;

  explicit Stop_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Stop_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crazyflie_interfaces::srv::Stop_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crazyflie_interfaces::srv::Stop_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crazyflie_interfaces::srv::Stop_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const crazyflie_interfaces::srv::Stop_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crazyflie_interfaces::srv::Stop_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crazyflie_interfaces::srv::Stop_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crazyflie_interfaces::srv::Stop_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crazyflie_interfaces::srv::Stop_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crazyflie_interfaces::srv::Stop_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crazyflie_interfaces::srv::Stop_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crazyflie_interfaces::srv::Stop_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crazyflie_interfaces::srv::Stop_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crazyflie_interfaces__srv__Stop_Event
    std::shared_ptr<crazyflie_interfaces::srv::Stop_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crazyflie_interfaces__srv__Stop_Event
    std::shared_ptr<crazyflie_interfaces::srv::Stop_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stop_Event_ & other) const
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
  bool operator!=(const Stop_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stop_Event_

// alias to use template instance with default allocator
using Stop_Event =
  crazyflie_interfaces::srv::Stop_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crazyflie_interfaces

namespace crazyflie_interfaces
{

namespace srv
{

struct Stop
{
  using Request = crazyflie_interfaces::srv::Stop_Request;
  using Response = crazyflie_interfaces::srv::Stop_Response;
  using Event = crazyflie_interfaces::srv::Stop_Event;
};

}  // namespace srv

}  // namespace crazyflie_interfaces

#endif  // CRAZYFLIE_INTERFACES__SRV__DETAIL__STOP__STRUCT_HPP_