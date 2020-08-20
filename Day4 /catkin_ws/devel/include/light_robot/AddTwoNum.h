// Generated by gencpp from file light_robot/AddTwoNum.msg
// DO NOT EDIT!


#ifndef LIGHT_ROBOT_MESSAGE_ADDTWONUM_H
#define LIGHT_ROBOT_MESSAGE_ADDTWONUM_H

#include <ros/service_traits.h>


#include <light_robot/AddTwoNumRequest.h>
#include <light_robot/AddTwoNumResponse.h>


namespace light_robot
{

struct AddTwoNum
{

typedef AddTwoNumRequest Request;
typedef AddTwoNumResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddTwoNum
} // namespace light_robot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::light_robot::AddTwoNum > {
  static const char* value()
  {
    return "875493d2ec8f0bdc18c62960322c94b7";
  }

  static const char* value(const ::light_robot::AddTwoNum&) { return value(); }
};

template<>
struct DataType< ::light_robot::AddTwoNum > {
  static const char* value()
  {
    return "light_robot/AddTwoNum";
  }

  static const char* value(const ::light_robot::AddTwoNum&) { return value(); }
};


// service_traits::MD5Sum< ::light_robot::AddTwoNumRequest> should match
// service_traits::MD5Sum< ::light_robot::AddTwoNum >
template<>
struct MD5Sum< ::light_robot::AddTwoNumRequest>
{
  static const char* value()
  {
    return MD5Sum< ::light_robot::AddTwoNum >::value();
  }
  static const char* value(const ::light_robot::AddTwoNumRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::light_robot::AddTwoNumRequest> should match
// service_traits::DataType< ::light_robot::AddTwoNum >
template<>
struct DataType< ::light_robot::AddTwoNumRequest>
{
  static const char* value()
  {
    return DataType< ::light_robot::AddTwoNum >::value();
  }
  static const char* value(const ::light_robot::AddTwoNumRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::light_robot::AddTwoNumResponse> should match
// service_traits::MD5Sum< ::light_robot::AddTwoNum >
template<>
struct MD5Sum< ::light_robot::AddTwoNumResponse>
{
  static const char* value()
  {
    return MD5Sum< ::light_robot::AddTwoNum >::value();
  }
  static const char* value(const ::light_robot::AddTwoNumResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::light_robot::AddTwoNumResponse> should match
// service_traits::DataType< ::light_robot::AddTwoNum >
template<>
struct DataType< ::light_robot::AddTwoNumResponse>
{
  static const char* value()
  {
    return DataType< ::light_robot::AddTwoNum >::value();
  }
  static const char* value(const ::light_robot::AddTwoNumResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // LIGHT_ROBOT_MESSAGE_ADDTWONUM_H
