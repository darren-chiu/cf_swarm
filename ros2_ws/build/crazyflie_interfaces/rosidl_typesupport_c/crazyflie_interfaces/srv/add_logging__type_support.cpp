// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from crazyflie_interfaces:srv/AddLogging.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "crazyflie_interfaces/srv/detail/add_logging__struct.h"
#include "crazyflie_interfaces/srv/detail/add_logging__type_support.h"
#include "crazyflie_interfaces/srv/detail/add_logging__functions.h"
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

typedef struct _AddLogging_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddLogging_Request_type_support_ids_t;

static const _AddLogging_Request_type_support_ids_t _AddLogging_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddLogging_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddLogging_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddLogging_Request_type_support_symbol_names_t _AddLogging_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_interfaces, srv, AddLogging_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_interfaces, srv, AddLogging_Request)),
  }
};

typedef struct _AddLogging_Request_type_support_data_t
{
  void * data[2];
} _AddLogging_Request_type_support_data_t;

static _AddLogging_Request_type_support_data_t _AddLogging_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddLogging_Request_message_typesupport_map = {
  2,
  "crazyflie_interfaces",
  &_AddLogging_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AddLogging_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AddLogging_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddLogging_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddLogging_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &crazyflie_interfaces__srv__AddLogging_Request__get_type_hash,
  &crazyflie_interfaces__srv__AddLogging_Request__get_type_description,
  &crazyflie_interfaces__srv__AddLogging_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace crazyflie_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_interfaces, srv, AddLogging_Request)() {
  return &::crazyflie_interfaces::srv::rosidl_typesupport_c::AddLogging_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/add_logging__struct.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/add_logging__type_support.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/add_logging__functions.h"
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

typedef struct _AddLogging_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddLogging_Response_type_support_ids_t;

static const _AddLogging_Response_type_support_ids_t _AddLogging_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddLogging_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddLogging_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddLogging_Response_type_support_symbol_names_t _AddLogging_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_interfaces, srv, AddLogging_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_interfaces, srv, AddLogging_Response)),
  }
};

typedef struct _AddLogging_Response_type_support_data_t
{
  void * data[2];
} _AddLogging_Response_type_support_data_t;

static _AddLogging_Response_type_support_data_t _AddLogging_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddLogging_Response_message_typesupport_map = {
  2,
  "crazyflie_interfaces",
  &_AddLogging_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AddLogging_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AddLogging_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddLogging_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddLogging_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &crazyflie_interfaces__srv__AddLogging_Response__get_type_hash,
  &crazyflie_interfaces__srv__AddLogging_Response__get_type_description,
  &crazyflie_interfaces__srv__AddLogging_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace crazyflie_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_interfaces, srv, AddLogging_Response)() {
  return &::crazyflie_interfaces::srv::rosidl_typesupport_c::AddLogging_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/add_logging__struct.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/add_logging__type_support.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/add_logging__functions.h"
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

typedef struct _AddLogging_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddLogging_Event_type_support_ids_t;

static const _AddLogging_Event_type_support_ids_t _AddLogging_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddLogging_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddLogging_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddLogging_Event_type_support_symbol_names_t _AddLogging_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_interfaces, srv, AddLogging_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_interfaces, srv, AddLogging_Event)),
  }
};

typedef struct _AddLogging_Event_type_support_data_t
{
  void * data[2];
} _AddLogging_Event_type_support_data_t;

static _AddLogging_Event_type_support_data_t _AddLogging_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddLogging_Event_message_typesupport_map = {
  2,
  "crazyflie_interfaces",
  &_AddLogging_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AddLogging_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AddLogging_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddLogging_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddLogging_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &crazyflie_interfaces__srv__AddLogging_Event__get_type_hash,
  &crazyflie_interfaces__srv__AddLogging_Event__get_type_description,
  &crazyflie_interfaces__srv__AddLogging_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace crazyflie_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_interfaces, srv, AddLogging_Event)() {
  return &::crazyflie_interfaces::srv::rosidl_typesupport_c::AddLogging_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/add_logging__type_support.h"
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
typedef struct _AddLogging_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddLogging_type_support_ids_t;

static const _AddLogging_type_support_ids_t _AddLogging_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddLogging_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddLogging_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddLogging_type_support_symbol_names_t _AddLogging_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, crazyflie_interfaces, srv, AddLogging)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crazyflie_interfaces, srv, AddLogging)),
  }
};

typedef struct _AddLogging_type_support_data_t
{
  void * data[2];
} _AddLogging_type_support_data_t;

static _AddLogging_type_support_data_t _AddLogging_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddLogging_service_typesupport_map = {
  2,
  "crazyflie_interfaces",
  &_AddLogging_service_typesupport_ids.typesupport_identifier[0],
  &_AddLogging_service_typesupport_symbol_names.symbol_name[0],
  &_AddLogging_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AddLogging_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddLogging_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &AddLogging_Request_message_type_support_handle,
  &AddLogging_Response_message_type_support_handle,
  &AddLogging_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    crazyflie_interfaces,
    srv,
    AddLogging
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    crazyflie_interfaces,
    srv,
    AddLogging
  ),
  &crazyflie_interfaces__srv__AddLogging__get_type_hash,
  &crazyflie_interfaces__srv__AddLogging__get_type_description,
  &crazyflie_interfaces__srv__AddLogging__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace crazyflie_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, crazyflie_interfaces, srv, AddLogging)() {
  return &::crazyflie_interfaces::srv::rosidl_typesupport_c::AddLogging_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
