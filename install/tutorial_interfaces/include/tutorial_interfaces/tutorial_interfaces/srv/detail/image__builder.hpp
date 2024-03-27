// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/Image.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__IMAGE__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_Image_Request_image
{
public:
  Init_Image_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::Image_Request image(::tutorial_interfaces::srv::Image_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::Image_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::Image_Request>()
{
  return tutorial_interfaces::srv::builder::Init_Image_Request_image();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_Image_Response_ids
{
public:
  explicit Init_Image_Response_ids(::tutorial_interfaces::srv::Image_Response & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::Image_Response ids(::tutorial_interfaces::srv::Image_Response::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::Image_Response msg_;
};

class Init_Image_Response_corners
{
public:
  Init_Image_Response_corners()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Image_Response_ids corners(::tutorial_interfaces::srv::Image_Response::_corners_type arg)
  {
    msg_.corners = std::move(arg);
    return Init_Image_Response_ids(msg_);
  }

private:
  ::tutorial_interfaces::srv::Image_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::Image_Response>()
{
  return tutorial_interfaces::srv::builder::Init_Image_Response_corners();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__IMAGE__BUILDER_HPP_
