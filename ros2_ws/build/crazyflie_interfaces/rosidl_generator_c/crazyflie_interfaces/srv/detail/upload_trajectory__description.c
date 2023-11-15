// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from crazyflie_interfaces:srv/UploadTrajectory.idl
// generated code does not contain a copyright notice

#include "crazyflie_interfaces/srv/detail/upload_trajectory__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
const rosidl_type_hash_t *
crazyflie_interfaces__srv__UploadTrajectory__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0xb4, 0xbc, 0xcd, 0x84, 0x81, 0x71, 0x3c,
      0xd5, 0x5a, 0x3d, 0x6f, 0x38, 0x69, 0xce, 0x54,
      0xf8, 0x8d, 0x22, 0xce, 0xf0, 0xe6, 0xbe, 0xdf,
      0x9f, 0x0c, 0x2b, 0x21, 0x6a, 0xf0, 0x02, 0x8e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
const rosidl_type_hash_t *
crazyflie_interfaces__srv__UploadTrajectory_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0x23, 0x2a, 0x8b, 0x4f, 0x07, 0xaf, 0xa8,
      0xe1, 0x55, 0x99, 0x6e, 0xe4, 0xc4, 0xa0, 0x65,
      0x2e, 0x61, 0x1b, 0xeb, 0x34, 0xfe, 0xc9, 0x8c,
      0x15, 0x34, 0xf1, 0xe1, 0xf9, 0x75, 0x67, 0x99,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
const rosidl_type_hash_t *
crazyflie_interfaces__srv__UploadTrajectory_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0xe8, 0xb3, 0x4a, 0x58, 0xcc, 0xc3, 0xf1,
      0xb3, 0xab, 0x9c, 0x5c, 0x6c, 0x95, 0xa8, 0xc2,
      0x5c, 0xda, 0xf1, 0x77, 0x3e, 0x4c, 0xe5, 0xd2,
      0xb6, 0xc0, 0x54, 0x28, 0xc4, 0x2d, 0x14, 0xec,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
const rosidl_type_hash_t *
crazyflie_interfaces__srv__UploadTrajectory_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0xcd, 0x6a, 0x9c, 0x1e, 0xd9, 0x99, 0x71,
      0xeb, 0x60, 0xd3, 0x6e, 0x7e, 0xd4, 0xd5, 0xb7,
      0xa0, 0xb2, 0x68, 0x15, 0x05, 0x5f, 0x17, 0x39,
      0x92, 0x3f, 0xe4, 0x1e, 0xed, 0x9d, 0x1b, 0x4e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/duration__functions.h"
#include "crazyflie_interfaces/msg/detail/trajectory_polynomial_piece__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t crazyflie_interfaces__msg__TrajectoryPolynomialPiece__EXPECTED_HASH = {1, {
    0x11, 0x2b, 0x80, 0xed, 0xc3, 0x00, 0x60, 0x00,
    0xcd, 0xf0, 0xaf, 0x68, 0x0f, 0x73, 0x29, 0x16,
    0xbb, 0xa8, 0xd8, 0xa0, 0x16, 0x83, 0xcb, 0x0a,
    0x10, 0xd7, 0x34, 0x0f, 0x1e, 0x56, 0xbc, 0x4f,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char crazyflie_interfaces__srv__UploadTrajectory__TYPE_NAME[] = "crazyflie_interfaces/srv/UploadTrajectory";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char crazyflie_interfaces__msg__TrajectoryPolynomialPiece__TYPE_NAME[] = "crazyflie_interfaces/msg/TrajectoryPolynomialPiece";
static char crazyflie_interfaces__srv__UploadTrajectory_Event__TYPE_NAME[] = "crazyflie_interfaces/srv/UploadTrajectory_Event";
static char crazyflie_interfaces__srv__UploadTrajectory_Request__TYPE_NAME[] = "crazyflie_interfaces/srv/UploadTrajectory_Request";
static char crazyflie_interfaces__srv__UploadTrajectory_Response__TYPE_NAME[] = "crazyflie_interfaces/srv/UploadTrajectory_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char crazyflie_interfaces__srv__UploadTrajectory__FIELD_NAME__request_message[] = "request_message";
static char crazyflie_interfaces__srv__UploadTrajectory__FIELD_NAME__response_message[] = "response_message";
static char crazyflie_interfaces__srv__UploadTrajectory__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field crazyflie_interfaces__srv__UploadTrajectory__FIELDS[] = {
  {
    {crazyflie_interfaces__srv__UploadTrajectory__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {crazyflie_interfaces__srv__UploadTrajectory_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__UploadTrajectory__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {crazyflie_interfaces__srv__UploadTrajectory_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__UploadTrajectory__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {crazyflie_interfaces__srv__UploadTrajectory_Event__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription crazyflie_interfaces__srv__UploadTrajectory__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__msg__TrajectoryPolynomialPiece__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__UploadTrajectory_Event__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__UploadTrajectory_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__UploadTrajectory_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crazyflie_interfaces__srv__UploadTrajectory__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazyflie_interfaces__srv__UploadTrajectory__TYPE_NAME, 41, 41},
      {crazyflie_interfaces__srv__UploadTrajectory__FIELDS, 3, 3},
    },
    {crazyflie_interfaces__srv__UploadTrajectory__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&crazyflie_interfaces__msg__TrajectoryPolynomialPiece__EXPECTED_HASH, crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = crazyflie_interfaces__srv__UploadTrajectory_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = crazyflie_interfaces__srv__UploadTrajectory_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = crazyflie_interfaces__srv__UploadTrajectory_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char crazyflie_interfaces__srv__UploadTrajectory_Request__FIELD_NAME__trajectory_id[] = "trajectory_id";
static char crazyflie_interfaces__srv__UploadTrajectory_Request__FIELD_NAME__piece_offset[] = "piece_offset";
static char crazyflie_interfaces__srv__UploadTrajectory_Request__FIELD_NAME__pieces[] = "pieces";

static rosidl_runtime_c__type_description__Field crazyflie_interfaces__srv__UploadTrajectory_Request__FIELDS[] = {
  {
    {crazyflie_interfaces__srv__UploadTrajectory_Request__FIELD_NAME__trajectory_id, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__UploadTrajectory_Request__FIELD_NAME__piece_offset, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__UploadTrajectory_Request__FIELD_NAME__pieces, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {crazyflie_interfaces__msg__TrajectoryPolynomialPiece__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription crazyflie_interfaces__srv__UploadTrajectory_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__msg__TrajectoryPolynomialPiece__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crazyflie_interfaces__srv__UploadTrajectory_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazyflie_interfaces__srv__UploadTrajectory_Request__TYPE_NAME, 49, 49},
      {crazyflie_interfaces__srv__UploadTrajectory_Request__FIELDS, 3, 3},
    },
    {crazyflie_interfaces__srv__UploadTrajectory_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&crazyflie_interfaces__msg__TrajectoryPolynomialPiece__EXPECTED_HASH, crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char crazyflie_interfaces__srv__UploadTrajectory_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field crazyflie_interfaces__srv__UploadTrajectory_Response__FIELDS[] = {
  {
    {crazyflie_interfaces__srv__UploadTrajectory_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
crazyflie_interfaces__srv__UploadTrajectory_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazyflie_interfaces__srv__UploadTrajectory_Response__TYPE_NAME, 50, 50},
      {crazyflie_interfaces__srv__UploadTrajectory_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char crazyflie_interfaces__srv__UploadTrajectory_Event__FIELD_NAME__info[] = "info";
static char crazyflie_interfaces__srv__UploadTrajectory_Event__FIELD_NAME__request[] = "request";
static char crazyflie_interfaces__srv__UploadTrajectory_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field crazyflie_interfaces__srv__UploadTrajectory_Event__FIELDS[] = {
  {
    {crazyflie_interfaces__srv__UploadTrajectory_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__UploadTrajectory_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {crazyflie_interfaces__srv__UploadTrajectory_Request__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__UploadTrajectory_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {crazyflie_interfaces__srv__UploadTrajectory_Response__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription crazyflie_interfaces__srv__UploadTrajectory_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__msg__TrajectoryPolynomialPiece__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__UploadTrajectory_Request__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__srv__UploadTrajectory_Response__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crazyflie_interfaces__srv__UploadTrajectory_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazyflie_interfaces__srv__UploadTrajectory_Event__TYPE_NAME, 47, 47},
      {crazyflie_interfaces__srv__UploadTrajectory_Event__FIELDS, 3, 3},
    },
    {crazyflie_interfaces__srv__UploadTrajectory_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&crazyflie_interfaces__msg__TrajectoryPolynomialPiece__EXPECTED_HASH, crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = crazyflie_interfaces__srv__UploadTrajectory_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = crazyflie_interfaces__srv__UploadTrajectory_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 trajectory_id\n"
  "uint32 piece_offset\n"
  "TrajectoryPolynomialPiece[] pieces\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
crazyflie_interfaces__srv__UploadTrajectory__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazyflie_interfaces__srv__UploadTrajectory__TYPE_NAME, 41, 41},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 79, 79},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
crazyflie_interfaces__srv__UploadTrajectory_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazyflie_interfaces__srv__UploadTrajectory_Request__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
crazyflie_interfaces__srv__UploadTrajectory_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazyflie_interfaces__srv__UploadTrajectory_Response__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
crazyflie_interfaces__srv__UploadTrajectory_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazyflie_interfaces__srv__UploadTrajectory_Event__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazyflie_interfaces__srv__UploadTrajectory__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazyflie_interfaces__srv__UploadTrajectory__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_individual_type_description_source(NULL);
    sources[4] = *crazyflie_interfaces__srv__UploadTrajectory_Event__get_individual_type_description_source(NULL);
    sources[5] = *crazyflie_interfaces__srv__UploadTrajectory_Request__get_individual_type_description_source(NULL);
    sources[6] = *crazyflie_interfaces__srv__UploadTrajectory_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazyflie_interfaces__srv__UploadTrajectory_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazyflie_interfaces__srv__UploadTrajectory_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazyflie_interfaces__srv__UploadTrajectory_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazyflie_interfaces__srv__UploadTrajectory_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazyflie_interfaces__srv__UploadTrajectory_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazyflie_interfaces__srv__UploadTrajectory_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_individual_type_description_source(NULL);
    sources[4] = *crazyflie_interfaces__srv__UploadTrajectory_Request__get_individual_type_description_source(NULL);
    sources[5] = *crazyflie_interfaces__srv__UploadTrajectory_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
