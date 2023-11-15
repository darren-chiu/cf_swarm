// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from crazyflie_interfaces:msg/TrajectoryPolynomialPiece.idl
// generated code does not contain a copyright notice

#include "crazyflie_interfaces/msg/detail/trajectory_polynomial_piece__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
const rosidl_type_hash_t *
crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x11, 0x2b, 0x80, 0xed, 0xc3, 0x00, 0x60, 0x00,
      0xcd, 0xf0, 0xaf, 0x68, 0x0f, 0x73, 0x29, 0x16,
      0xbb, 0xa8, 0xd8, 0xa0, 0x16, 0x83, 0xcb, 0x0a,
      0x10, 0xd7, 0x34, 0x0f, 0x1e, 0x56, 0xbc, 0x4f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/duration__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
#endif

static char crazyflie_interfaces__msg__TrajectoryPolynomialPiece__TYPE_NAME[] = "crazyflie_interfaces/msg/TrajectoryPolynomialPiece";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";

// Define type names, field names, and default values
static char crazyflie_interfaces__msg__TrajectoryPolynomialPiece__FIELD_NAME__poly_x[] = "poly_x";
static char crazyflie_interfaces__msg__TrajectoryPolynomialPiece__FIELD_NAME__poly_y[] = "poly_y";
static char crazyflie_interfaces__msg__TrajectoryPolynomialPiece__FIELD_NAME__poly_z[] = "poly_z";
static char crazyflie_interfaces__msg__TrajectoryPolynomialPiece__FIELD_NAME__poly_yaw[] = "poly_yaw";
static char crazyflie_interfaces__msg__TrajectoryPolynomialPiece__FIELD_NAME__duration[] = "duration";

static rosidl_runtime_c__type_description__Field crazyflie_interfaces__msg__TrajectoryPolynomialPiece__FIELDS[] = {
  {
    {crazyflie_interfaces__msg__TrajectoryPolynomialPiece__FIELD_NAME__poly_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__msg__TrajectoryPolynomialPiece__FIELD_NAME__poly_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__msg__TrajectoryPolynomialPiece__FIELD_NAME__poly_z, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__msg__TrajectoryPolynomialPiece__FIELD_NAME__poly_yaw, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__msg__TrajectoryPolynomialPiece__FIELD_NAME__duration, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription crazyflie_interfaces__msg__TrajectoryPolynomialPiece__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazyflie_interfaces__msg__TrajectoryPolynomialPiece__TYPE_NAME, 50, 50},
      {crazyflie_interfaces__msg__TrajectoryPolynomialPiece__FIELDS, 5, 5},
    },
    {crazyflie_interfaces__msg__TrajectoryPolynomialPiece__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "\n"
  "float32[] poly_x\n"
  "float32[] poly_y\n"
  "float32[] poly_z\n"
  "float32[] poly_yaw\n"
  "builtin_interfaces/Duration duration";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazyflie_interfaces__msg__TrajectoryPolynomialPiece__TYPE_NAME, 50, 50},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 109, 109},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazyflie_interfaces__msg__TrajectoryPolynomialPiece__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
