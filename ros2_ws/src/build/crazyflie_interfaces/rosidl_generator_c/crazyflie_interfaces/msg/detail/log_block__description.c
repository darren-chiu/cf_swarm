// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from crazyflie_interfaces:msg/LogBlock.idl
// generated code does not contain a copyright notice

#include "crazyflie_interfaces/msg/detail/log_block__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_crazyflie_interfaces
const rosidl_type_hash_t *
crazyflie_interfaces__msg__LogBlock__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x3e, 0x85, 0x22, 0xd9, 0x7e, 0x46, 0x93,
      0xff, 0xe5, 0xfa, 0xd6, 0x3a, 0x54, 0xc7, 0x79,
      0xf3, 0x8e, 0x4c, 0x77, 0x13, 0xf7, 0x97, 0xae,
      0xd2, 0x9a, 0xae, 0xef, 0x56, 0xb9, 0xf4, 0xa5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char crazyflie_interfaces__msg__LogBlock__TYPE_NAME[] = "crazyflie_interfaces/msg/LogBlock";

// Define type names, field names, and default values
static char crazyflie_interfaces__msg__LogBlock__FIELD_NAME__topic_name[] = "topic_name";
static char crazyflie_interfaces__msg__LogBlock__FIELD_NAME__frequency[] = "frequency";
static char crazyflie_interfaces__msg__LogBlock__FIELD_NAME__variables[] = "variables";

static rosidl_runtime_c__type_description__Field crazyflie_interfaces__msg__LogBlock__FIELDS[] = {
  {
    {crazyflie_interfaces__msg__LogBlock__FIELD_NAME__topic_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__msg__LogBlock__FIELD_NAME__frequency, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {crazyflie_interfaces__msg__LogBlock__FIELD_NAME__variables, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
crazyflie_interfaces__msg__LogBlock__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {crazyflie_interfaces__msg__LogBlock__TYPE_NAME, 33, 33},
      {crazyflie_interfaces__msg__LogBlock__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string topic_name\n"
  "int16 frequency\n"
  "string[] variables";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
crazyflie_interfaces__msg__LogBlock__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {crazyflie_interfaces__msg__LogBlock__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
crazyflie_interfaces__msg__LogBlock__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *crazyflie_interfaces__msg__LogBlock__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
