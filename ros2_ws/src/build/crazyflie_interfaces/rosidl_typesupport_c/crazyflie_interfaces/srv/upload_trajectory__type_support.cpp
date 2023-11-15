// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from crazyflie_interfaces:srv/UploadTrajectory.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "crazyflie_interfaces/srv/detail/upload_trajectory__struct.h"
#include "crazyflie_interfaces/srv/detail/upload_trajectory__type_support.h"
#include "crazyflie_interfaces/srv/detail/upload_trajectory__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _UploadTrajectory_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UploadTrajectory_Request_type_support_ids_t;

static const _UploadTrajectory_Request_type_support_ids_t _UploadTrajectory_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UploadTrajectory_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UploadTrajectory_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UploadTrajectory_Request_type_support_symbol_names_t _UploadTrajectory_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_interfaces, srv, UploadTrajectory_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_interfaces, srv, UploadTrajectory_Request)),
  }
};

typedef struct _UploadTrajectory_Request_type_support_data_t
{
  void * data[2];
} _UploadTrajectory_Request_type_support_data_t;

static _UploadTrajectory_Request_type_support_data_t _UploadTrajectory_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UploadTrajectory_Request_message_typesupport_map = {
  2,
  "crazyflie_interfaces",
  &_UploadTrajectory_Request_message_typesupport_ids.typesupport_identifier[0],
  &_UploadTrajectory_Request_message_typesupport_symbol_names.symbol_name[0],
  &_UploadTrajectory_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UploadTrajectory_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UploadTrajectory_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &crazyflie_interfaces__srv__UploadTrajectory_Request__get_type_hash,
  &crazyflie_interfaces__srv__UploadTrajectory_Request__get_type_description,
  &crazyflie_interfaces__srv__UploadTrajectory_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace crazyflie_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_interfaces, srv, UploadTrajectory_Request)() {
  return &::crazyflie_interfaces::srv::rosidl_typesupport_c::UploadTrajectory_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/upload_trajectory__struct.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/upload_trajectory__type_support.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/upload_trajectory__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _UploadTrajectory_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UploadTrajectory_Response_type_support_ids_t;

static const _UploadTrajectory_Response_type_support_ids_t _UploadTrajectory_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UploadTrajectory_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UploadTrajectory_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UploadTrajectory_Response_type_support_symbol_names_t _UploadTrajectory_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_interfaces, srv, UploadTrajectory_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_interfaces, srv, UploadTrajectory_Response)),
  }
};

typedef struct _UploadTrajectory_Response_type_support_data_t
{
  void * data[2];
} _UploadTrajectory_Response_type_support_data_t;

static _UploadTrajectory_Response_type_support_data_t _UploadTrajectory_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UploadTrajectory_Response_message_typesupport_map = {
  2,
  "crazyflie_interfaces",
  &_UploadTrajectory_Response_message_typesupport_ids.typesupport_identifier[0],
  &_UploadTrajectory_Response_message_typesupport_symbol_names.symbol_name[0],
  &_UploadTrajectory_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UploadTrajectory_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UploadTrajectory_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &crazyflie_interfaces__srv__UploadTrajectory_Response__get_type_hash,
  &crazyflie_interfaces__srv__UploadTrajectory_Response__get_type_description,
  &crazyflie_interfaces__srv__UploadTrajectory_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace crazyflie_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_interfaces, srv, UploadTrajectory_Response)() {
  return &::crazyflie_interfaces::srv::rosidl_typesupport_c::UploadTrajectory_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/upload_trajectory__struct.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/upload_trajectory__type_support.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/upload_trajectory__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _UploadTrajectory_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UploadTrajectory_Event_type_support_ids_t;

static const _UploadTrajectory_Event_type_support_ids_t _UploadTrajectory_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UploadTrajectory_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UploadTrajectory_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UploadTrajectory_Event_type_support_symbol_names_t _UploadTrajectory_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_interfaces, srv, UploadTrajectory_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_interfaces, srv, UploadTrajectory_Event)),
  }
};

typedef struct _UploadTrajectory_Event_type_support_data_t
{
  void * data[2];
} _UploadTrajectory_Event_type_support_data_t;

static _UploadTrajectory_Event_type_support_data_t _UploadTrajectory_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UploadTrajectory_Event_message_typesupport_map = {
  2,
  "crazyflie_interfaces",
  &_UploadTrajectory_Event_message_typesupport_ids.typesupport_identifier[0],
  &_UploadTrajectory_Event_message_typesupport_symbol_names.symbol_name[0],
  &_UploadTrajectory_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t UploadTrajectory_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UploadTrajectory_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &crazyflie_interfaces__srv__UploadTrajectory_Event__get_type_hash,
  &crazyflie_interfaces__srv__UploadTrajectory_Event__get_type_description,
  &crazyflie_interfaces__srv__UploadTrajectory_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace crazyflie_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_interfaces, srv, UploadTrajectory_Event)() {
  return &::crazyflie_interfaces::srv::rosidl_typesupport_c::UploadTrajectory_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/upload_trajectory__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace crazyflie_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _UploadTrajectory_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UploadTrajectory_type_support_ids_t;

static const _UploadTrajectory_type_support_ids_t _UploadTrajectory_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _UploadTrajectory_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UploadTrajectory_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UploadTrajectory_type_support_symbol_names_t _UploadTrajectory_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_interfaces, srv, UploadTrajectory)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_interfaces, srv, UploadTrajectory)),
  }
};

typedef struct _UploadTrajectory_type_support_data_t
{
  void * data[2];
} _UploadTrajectory_type_support_data_t;

static _UploadTrajectory_type_support_data_t _UploadTrajectory_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _UploadTrajectory_service_typesupport_map = {
  2,
  "crazyflie_interfaces",
  &_UploadTrajectory_service_typesupport_ids.typesupport_identifier[0],
  &_UploadTrajectory_service_typesupport_symbol_names.symbol_name[0],
  &_UploadTrajectory_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t UploadTrajectory_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UploadTrajectory_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &UploadTrajectory_Request_message_type_support_handle,
  &UploadTrajectory_Response_message_type_support_handle,
  &UploadTrajectory_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    crazyflie_interfaces,
    srv,
    UploadTrajectory
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    crazyflie_interfaces,
    srv,
    UploadTrajectory
  ),
  &crazyflie_interfaces__srv__UploadTrajectory__get_type_hash,
  &crazyflie_interfaces__srv__UploadTrajectory__get_type_description,
  &crazyflie_interfaces__srv__UploadTrajectory__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace crazyflie_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_interfaces, srv, UploadTrajectory)() {
  return &::crazyflie_interfaces::srv::rosidl_typesupport_c::UploadTrajectory_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
