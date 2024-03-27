// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/Imagesrv.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__IMAGESRV__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__IMAGESRV__STRUCT_H_

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

/// Struct defined in srv/Imagesrv in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__Imagesrv_Request
{
  sensor_msgs__msg__Image image;
} tutorial_interfaces__srv__Imagesrv_Request;

// Struct for a sequence of tutorial_interfaces__srv__Imagesrv_Request.
typedef struct tutorial_interfaces__srv__Imagesrv_Request__Sequence
{
  tutorial_interfaces__srv__Imagesrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__Imagesrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'corners'
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Imagesrv in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__Imagesrv_Response
{
  rosidl_runtime_c__float__Sequence corners;
  rosidl_runtime_c__float__Sequence ids;
} tutorial_interfaces__srv__Imagesrv_Response;

// Struct for a sequence of tutorial_interfaces__srv__Imagesrv_Response.
typedef struct tutorial_interfaces__srv__Imagesrv_Response__Sequence
{
  tutorial_interfaces__srv__Imagesrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__Imagesrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__IMAGESRV__STRUCT_H_
