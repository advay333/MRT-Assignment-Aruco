// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:msg/Aruco.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__ARUCO__STRUCT_H_
#define TUTORIAL_INTERFACES__MSG__DETAIL__ARUCO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/Aruco in the package tutorial_interfaces.
typedef struct tutorial_interfaces__msg__Aruco
{
  sensor_msgs__msg__Image image;
} tutorial_interfaces__msg__Aruco;

// Struct for a sequence of tutorial_interfaces__msg__Aruco.
typedef struct tutorial_interfaces__msg__Aruco__Sequence
{
  tutorial_interfaces__msg__Aruco * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__msg__Aruco__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__ARUCO__STRUCT_H_
