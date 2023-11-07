// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from crazyflie_interfaces:srv/RemoveLogging.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "crazyflie_interfaces/srv/detail/remove_logging__functions.h"
#include "crazyflie_interfaces/srv/detail/remove_logging__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RemoveLogging_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RemoveLogging_Request_type_support_ids_t;

static const _RemoveLogging_Request_type_support_ids_t _RemoveLogging_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RemoveLogging_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RemoveLogging_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RemoveLogging_Request_type_support_symbol_names_t _RemoveLogging_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crazyflie_interfaces, srv, RemoveLogging_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crazyflie_interfaces, srv, RemoveLogging_Request)),
  }
};

typedef struct _RemoveLogging_Request_type_support_data_t
{
  void * data[2];
} _RemoveLogging_Request_type_support_data_t;

static _RemoveLogging_Request_type_support_data_t _RemoveLogging_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RemoveLogging_Request_message_typesupport_map = {
  2,
  "crazyflie_interfaces",
  &_RemoveLogging_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RemoveLogging_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RemoveLogging_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RemoveLogging_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RemoveLogging_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &crazyflie_interfaces__srv__RemoveLogging_Request__get_type_hash,
  &crazyflie_interfaces__srv__RemoveLogging_Request__get_type_description,
  &crazyflie_interfaces__srv__RemoveLogging_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace crazyflie_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<crazyflie_interfaces::srv::RemoveLogging_Request>()
{
  return &::crazyflie_interfaces::srv::rosidl_typesupport_cpp::RemoveLogging_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, crazyflie_interfaces, srv, RemoveLogging_Request)() {
  return get_message_type_support_handle<crazyflie_interfaces::srv::RemoveLogging_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/remove_logging__functions.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/remove_logging__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RemoveLogging_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RemoveLogging_Response_type_support_ids_t;

static const _RemoveLogging_Response_type_support_ids_t _RemoveLogging_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RemoveLogging_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RemoveLogging_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RemoveLogging_Response_type_support_symbol_names_t _RemoveLogging_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crazyflie_interfaces, srv, RemoveLogging_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crazyflie_interfaces, srv, RemoveLogging_Response)),
  }
};

typedef struct _RemoveLogging_Response_type_support_data_t
{
  void * data[2];
} _RemoveLogging_Response_type_support_data_t;

static _RemoveLogging_Response_type_support_data_t _RemoveLogging_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RemoveLogging_Response_message_typesupport_map = {
  2,
  "crazyflie_interfaces",
  &_RemoveLogging_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RemoveLogging_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RemoveLogging_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RemoveLogging_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RemoveLogging_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &crazyflie_interfaces__srv__RemoveLogging_Response__get_type_hash,
  &crazyflie_interfaces__srv__RemoveLogging_Response__get_type_description,
  &crazyflie_interfaces__srv__RemoveLogging_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace crazyflie_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<crazyflie_interfaces::srv::RemoveLogging_Response>()
{
  return &::crazyflie_interfaces::srv::rosidl_typesupport_cpp::RemoveLogging_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, crazyflie_interfaces, srv, RemoveLogging_Response)() {
  return get_message_type_support_handle<crazyflie_interfaces::srv::RemoveLogging_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/remove_logging__functions.h"
// already included above
// #include "crazyflie_interfaces/srv/detail/remove_logging__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RemoveLogging_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RemoveLogging_Event_type_support_ids_t;

static const _RemoveLogging_Event_type_support_ids_t _RemoveLogging_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RemoveLogging_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RemoveLogging_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RemoveLogging_Event_type_support_symbol_names_t _RemoveLogging_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crazyflie_interfaces, srv, RemoveLogging_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crazyflie_interfaces, srv, RemoveLogging_Event)),
  }
};

typedef struct _RemoveLogging_Event_type_support_data_t
{
  void * data[2];
} _RemoveLogging_Event_type_support_data_t;

static _RemoveLogging_Event_type_support_data_t _RemoveLogging_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RemoveLogging_Event_message_typesupport_map = {
  2,
  "crazyflie_interfaces",
  &_RemoveLogging_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RemoveLogging_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RemoveLogging_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RemoveLogging_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RemoveLogging_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &crazyflie_interfaces__srv__RemoveLogging_Event__get_type_hash,
  &crazyflie_interfaces__srv__RemoveLogging_Event__get_type_description,
  &crazyflie_interfaces__srv__RemoveLogging_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace crazyflie_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<crazyflie_interfaces::srv::RemoveLogging_Event>()
{
  return &::crazyflie_interfaces::srv::rosidl_typesupport_cpp::RemoveLogging_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, crazyflie_interfaces, srv, RemoveLogging_Event)() {
  return get_message_type_support_handle<crazyflie_interfaces::srv::RemoveLogging_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "crazyflie_interfaces/srv/detail/remove_logging__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace crazyflie_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RemoveLogging_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RemoveLogging_type_support_ids_t;

static const _RemoveLogging_type_support_ids_t _RemoveLogging_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RemoveLogging_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RemoveLogging_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RemoveLogging_type_support_symbol_names_t _RemoveLogging_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, crazyflie_interfaces, srv, RemoveLogging)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, crazyflie_interfaces, srv, RemoveLogging)),
  }
};

typedef struct _RemoveLogging_type_support_data_t
{
  void * data[2];
} _RemoveLogging_type_support_data_t;

static _RemoveLogging_type_support_data_t _RemoveLogging_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RemoveLogging_service_typesupport_map = {
  2,
  "crazyflie_interfaces",
  &_RemoveLogging_service_typesupport_ids.typesupport_identifier[0],
  &_RemoveLogging_service_typesupport_symbol_names.symbol_name[0],
  &_RemoveLogging_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RemoveLogging_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RemoveLogging_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<crazyflie_interfaces::srv::RemoveLogging_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<crazyflie_interfaces::srv::RemoveLogging_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<crazyflie_interfaces::srv::RemoveLogging_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<crazyflie_interfaces::srv::RemoveLogging>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<crazyflie_interfaces::srv::RemoveLogging>,
  &crazyflie_interfaces__srv__RemoveLogging__get_type_hash,
  &crazyflie_interfaces__srv__RemoveLogging__get_type_description,
  &crazyflie_interfaces__srv__RemoveLogging__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace crazyflie_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<crazyflie_interfaces::srv::RemoveLogging>()
{
  return &::crazyflie_interfaces::srv::rosidl_typesupport_cpp::RemoveLogging_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
