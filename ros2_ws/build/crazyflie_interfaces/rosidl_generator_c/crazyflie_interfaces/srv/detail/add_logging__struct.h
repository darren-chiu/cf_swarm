// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crazyflie_interfaces:srv/AddLogging.idl
// generated code does not contain a copyright notice

#ifndef CRAZYFLIE_INTERFACES__SRV__DETAIL__ADD_LOGGING__STRUCT_H_
#define CRAZYFLIE_INTERFACES__SRV__DETAIL__ADD_LOGGING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic_name'
// Member 'vars'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AddLogging in the package crazyflie_interfaces.
typedef struct crazyflie_interfaces__srv__AddLogging_Request
{
  rosidl_runtime_c__String topic_name;
  int32_t frequency;
  rosidl_runtime_c__String__Sequence vars;
} crazyflie_interfaces__srv__AddLogging_Request;

// Struct for a sequence of crazyflie_interfaces__srv__AddLogging_Request.
typedef struct crazyflie_interfaces__srv__AddLogging_Request__Sequence
{
  crazyflie_interfaces__srv__AddLogging_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazyflie_interfaces__srv__AddLogging_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AddLogging in the package crazyflie_interfaces.
typedef struct crazyflie_interfaces__srv__AddLogging_Response
{
  bool success;
} crazyflie_interfaces__srv__AddLogging_Response;

// Struct for a sequence of crazyflie_interfaces__srv__AddLogging_Response.
typedef struct crazyflie_interfaces__srv__AddLogging_Response__Sequence
{
  crazyflie_interfaces__srv__AddLogging_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazyflie_interfaces__srv__AddLogging_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  crazyflie_interfaces__srv__AddLogging_Event__request__MAX_SIZE = 1
};
// response
enum
{
  crazyflie_interfaces__srv__AddLogging_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddLogging in the package crazyflie_interfaces.
typedef struct crazyflie_interfaces__srv__AddLogging_Event
{
  service_msgs__msg__ServiceEventInfo info;
  crazyflie_interfaces__srv__AddLogging_Request__Sequence request;
  crazyflie_interfaces__srv__AddLogging_Response__Sequence response;
} crazyflie_interfaces__srv__AddLogging_Event;

// Struct for a sequence of crazyflie_interfaces__srv__AddLogging_Event.
typedef struct crazyflie_interfaces__srv__AddLogging_Event__Sequence
{
  crazyflie_interfaces__srv__AddLogging_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crazyflie_interfaces__srv__AddLogging_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CRAZYFLIE_INTERFACES__SRV__DETAIL__ADD_LOGGING__STRUCT_H_
