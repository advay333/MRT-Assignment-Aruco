// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tutorial_interfaces:msg/Threed.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tutorial_interfaces/msg/detail/threed__rosidl_typesupport_introspection_c.h"
#include "tutorial_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tutorial_interfaces/msg/detail/threed__functions.h"
#include "tutorial_interfaces/msg/detail/threed__struct.h"


// Include directives for member types
// Member `corners`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__Threed_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tutorial_interfaces__msg__Threed__init(message_memory);
}

void tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__Threed_fini_function(void * message_memory)
{
  tutorial_interfaces__msg__Threed__fini(message_memory);
}

size_t tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__size_function__Threed__corners(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__get_const_function__Threed__corners(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__get_function__Threed__corners(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__fetch_function__Threed__corners(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__get_const_function__Threed__corners(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__assign_function__Threed__corners(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__get_function__Threed__corners(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__resize_function__Threed__corners(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__Threed_message_member_array[1] = {
  {
    "corners",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tutorial_interfaces__msg__Threed, corners),  // bytes offset in struct
    NULL,  // default value
    tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__size_function__Threed__corners,  // size() function pointer
    tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__get_const_function__Threed__corners,  // get_const(index) function pointer
    tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__get_function__Threed__corners,  // get(index) function pointer
    tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__fetch_function__Threed__corners,  // fetch(index, &value) function pointer
    tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__assign_function__Threed__corners,  // assign(index, value) function pointer
    tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__resize_function__Threed__corners  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__Threed_message_members = {
  "tutorial_interfaces__msg",  // message namespace
  "Threed",  // message name
  1,  // number of fields
  sizeof(tutorial_interfaces__msg__Threed),
  tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__Threed_message_member_array,  // message members
  tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__Threed_init_function,  // function to initialize message memory (memory has to be allocated)
  tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__Threed_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__Threed_message_type_support_handle = {
  0,
  &tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__Threed_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tutorial_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, msg, Threed)() {
  if (!tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__Threed_message_type_support_handle.typesupport_identifier) {
    tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__Threed_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tutorial_interfaces__msg__Threed__rosidl_typesupport_introspection_c__Threed_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
