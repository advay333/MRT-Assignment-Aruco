// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:msg/Threed.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__THREED__STRUCT_H_
#define TUTORIAL_INTERFACES__MSG__DETAIL__THREED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'corners'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Threed in the package tutorial_interfaces.
typedef struct tutorial_interfaces__msg__Threed
{
  rosidl_runtime_c__float__Sequence corners;
} tutorial_interfaces__msg__Threed;

// Struct for a sequence of tutorial_interfaces__msg__Threed.
typedef struct tutorial_interfaces__msg__Threed__Sequence
{
  tutorial_interfaces__msg__Threed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__msg__Threed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__THREED__STRUCT_H_
