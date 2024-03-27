// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:msg/Threed.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__THREED__TRAITS_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__THREED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tutorial_interfaces/msg/detail/threed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tutorial_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Threed & msg,
  std::ostream & out)
{
  out << "{";
  // member: corners
  {
    if (msg.corners.size() == 0) {
      out << "corners: []";
    } else {
      out << "corners: [";
      size_t pending_items = msg.corners.size();
      for (auto item : msg.corners) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Threed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: corners
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corners.size() == 0) {
      out << "corners: []\n";
    } else {
      out << "corners:\n";
      for (auto item : msg.corners) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Threed & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tutorial_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tutorial_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tutorial_interfaces::msg::Threed & msg,
  std::ostream & out, size_t indentation = 0)
{
  tutorial_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tutorial_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const tutorial_interfaces::msg::Threed & msg)
{
  return tutorial_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tutorial_interfaces::msg::Threed>()
{
  return "tutorial_interfaces::msg::Threed";
}

template<>
inline const char * name<tutorial_interfaces::msg::Threed>()
{
  return "tutorial_interfaces/msg/Threed";
}

template<>
struct has_fixed_size<tutorial_interfaces::msg::Threed>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tutorial_interfaces::msg::Threed>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tutorial_interfaces::msg::Threed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__THREED__TRAITS_HPP_
