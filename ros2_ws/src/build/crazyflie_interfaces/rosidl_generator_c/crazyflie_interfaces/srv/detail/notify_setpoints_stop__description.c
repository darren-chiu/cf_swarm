// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from crazyflie_interfaces:srv/NotifySetpointsStop.idl
// generated code does not contain a copyright notice

#include "crazyflie_interfaces/srv/detail/notify_setpoints_stop__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
const rosidl_type_hash_t *
crazyflie_interfaces__srv__NotifySetpointsStop__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3b, 0xc1, 0x15, 0xf2, 0x3a, 0x89, 0x7d, 0x77,
      0x33, 0xea, 0x1f, 0x5a, 0x99, 0xff, 0xb4, 0x82,
      0x46, 0x6d, 0xac, 0xb6, 0x93, 0x83, 0x5f, 0x85,
      0x4d, 0x51, 0xde, 0xd8, 0x02, 0x50, 0x3e, 0x83,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
const rosidl_type_hash_t *
crazyflie_interfaces__srv__NotifySetpointsStop_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0x00, 0x46, 0xaa, 0xa3, 0x3d, 0x44, 0x5a,
      0x65, 0xfd, 0x0c, 0xcb, 0x48, 0x62, 0xba, 0x15,
      0x0e, 0x70, 0x2b, 0x0c, 0x95, 0xdb, 0x39, 0x48,
      0xf4, 0x85, 0x13, 0x62, 0xa0, 0xb2, 0x7c, 0x9b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
const rosidl_type_hash_t *
crazyflie_interfaces__srv__NotifySetpointsStop_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8e, 0xdd, 0xcd, 0x7a, 0x1e, 0x56, 0xe5, 0x18,
      0xd3, 0x7d, 0x50, 0x36, 0xfc, 0xc2, 0x7a, 0x9e,
      0x7f, 0xe5, 0xb9, 0xb9, 0x50, 0xe5, 0x9d, 0x19,
      0xc3, 0x8f, 0x20, 0xf2, 0x41, 0x1e, 0x78, 0xd4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
const rosidl_type_hash_t *
crazyflie_interfaces__srv__NotifySetpointsStop_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xab, 0x4c, 0x98, 0xea, 0x62, 0xae, 0x5f, 0x17,
      0x72, 0xfd, 0x6a, 0xee, 0x55, 0x5c, 0x10, 0xaa,
      0xf1, 0x01, 0x1e, 0xe1, 0x7d, 0xdd, 0x8f, 0x95,
      0x85, 0xfd, 0x52, 0x8b, 0x5c, 0x9f, 0xb0, 0xa0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char crazyflie_interfaces__srv__NotifySetpointsStop__TYPE_NAME[] = "crazyflie_interfaces/srv/NotifySetpointsStop";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char crazyflie_interfaces__srv__NotifySetpointsStop_Event__TYPE_NAME[] = "crazyflie_interfaces/srv/NotifySetpointsStop_Event";
static char crazyflie_interfaces__srv__NotifySetpointsStop_Request__TYPE_NAME[] = "crazyflie_interfaces/srv/NotifySetpointsStop_Request";
static char crazyflie_interfaces__srv__NotifySetpointsStop_Response__TYPE_NAME[] = "crazyflie_interfaces/srv/NotifySetpointsStop_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char crazyflie_interfaces__srv__NotifySetpointsStop__FIELD_NAME__request_message[] = "request_message";
static char crazyflie_interfaces__srv__NotifySetpointsStop__FIELD_NAME__response_message[] = "response_message";
static char crazyflie_interfaces__srv__NotifySetpointsStop__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field crazyflie_interfaces__srv__NotifySetpointsStop__FIELDS[] = {
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {crazyflie_interfaces__srv__NotifySetpointsStop_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {crazyflie_interfaces__srv__NotifySetpointsStop_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {crazyflie_interfaces__srv__NotifySetpointsStop_Event__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription crazyflie_interfaces__srv__NotifySetpointsStop__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Event__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crazyflie_interfaces__srv__NotifySetpointsStop__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazyflie_interfaces__srv__NotifySetpointsStop__TYPE_NAME, 44, 44},
      {crazyflie_interfaces__srv__NotifySetpointsStop__FIELDS, 3, 3},
    },
    {crazyflie_interfaces__srv__NotifySetpointsStop__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = crazyflie_interfaces__srv__NotifySetpointsStop_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = crazyflie_interfaces__srv__NotifySetpointsStop_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = crazyflie_interfaces__srv__NotifySetpointsStop_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char crazyflie_interfaces__srv__NotifySetpointsStop_Request__FIELD_NAME__group_mask[] = "group_mask";
static char crazyflie_interfaces__srv__NotifySetpointsStop_Request__FIELD_NAME__remain_valid_millisecs[] = "remain_valid_millisecs";

static rosidl_runtime_c__type_description__Field crazyflie_interfaces__srv__NotifySetpointsStop_Request__FIELDS[] = {
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Request__FIELD_NAME__group_mask, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Request__FIELD_NAME__remain_valid_millisecs, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crazyflie_interfaces__srv__NotifySetpointsStop_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazyflie_interfaces__srv__NotifySetpointsStop_Request__TYPE_NAME, 52, 52},
      {crazyflie_interfaces__srv__NotifySetpointsStop_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char crazyflie_interfaces__srv__NotifySetpointsStop_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field crazyflie_interfaces__srv__NotifySetpointsStop_Response__FIELDS[] = {
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crazyflie_interfaces__srv__NotifySetpointsStop_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazyflie_interfaces__srv__NotifySetpointsStop_Response__TYPE_NAME, 53, 53},
      {crazyflie_interfaces__srv__NotifySetpointsStop_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char crazyflie_interfaces__srv__NotifySetpointsStop_Event__FIELD_NAME__info[] = "info";
static char crazyflie_interfaces__srv__NotifySetpointsStop_Event__FIELD_NAME__request[] = "request";
static char crazyflie_interfaces__srv__NotifySetpointsStop_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field crazyflie_interfaces__srv__NotifySetpointsStop_Event__FIELDS[] = {
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {crazyflie_interfaces__srv__NotifySetpointsStop_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {crazyflie_interfaces__srv__NotifySetpointsStop_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription crazyflie_interfaces__srv__NotifySetpointsStop_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crazyflie_interfaces__srv__NotifySetpointsStop_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazyflie_interfaces__srv__NotifySetpointsStop_Event__TYPE_NAME, 50, 50},
      {crazyflie_interfaces__srv__NotifySetpointsStop_Event__FIELDS, 3, 3},
    },
    {crazyflie_interfaces__srv__NotifySetpointsStop_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = crazyflie_interfaces__srv__NotifySetpointsStop_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = crazyflie_interfaces__srv__NotifySetpointsStop_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 group_mask\n"
  "uint32 remain_valid_millisecs\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
crazyflie_interfaces__srv__NotifySetpointsStop__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazyflie_interfaces__srv__NotifySetpointsStop__TYPE_NAME, 44, 44},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
crazyflie_interfaces__srv__NotifySetpointsStop_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Request__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
crazyflie_interfaces__srv__NotifySetpointsStop_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Response__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
crazyflie_interfaces__srv__NotifySetpointsStop_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazyflie_interfaces__srv__NotifySetpointsStop_Event__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazyflie_interfaces__srv__NotifySetpointsStop__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazyflie_interfaces__srv__NotifySetpointsStop__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *crazyflie_interfaces__srv__NotifySetpointsStop_Event__get_individual_type_description_source(NULL);
    sources[3] = *crazyflie_interfaces__srv__NotifySetpointsStop_Request__get_individual_type_description_source(NULL);
    sources[4] = *crazyflie_interfaces__srv__NotifySetpointsStop_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazyflie_interfaces__srv__NotifySetpointsStop_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazyflie_interfaces__srv__NotifySetpointsStop_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazyflie_interfaces__srv__NotifySetpointsStop_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazyflie_interfaces__srv__NotifySetpointsStop_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazyflie_interfaces__srv__NotifySetpointsStop_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazyflie_interfaces__srv__NotifySetpointsStop_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *crazyflie_interfaces__srv__NotifySetpointsStop_Request__get_individual_type_description_source(NULL);
    sources[3] = *crazyflie_interfaces__srv__NotifySetpointsStop_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
