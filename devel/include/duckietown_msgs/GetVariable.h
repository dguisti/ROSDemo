// Generated by gencpp from file duckietown_msgs/GetVariable.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_GETVARIABLE_H
#define DUCKIETOWN_MSGS_MESSAGE_GETVARIABLE_H

#include <ros/service_traits.h>


#include <duckietown_msgs/GetVariableRequest.h>
#include <duckietown_msgs/GetVariableResponse.h>


namespace duckietown_msgs
{

struct GetVariable
{

typedef GetVariableRequest Request;
typedef GetVariableResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetVariable
} // namespace duckietown_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::duckietown_msgs::GetVariable > {
  static const char* value()
  {
    return "685a8058475bb3a593fd8f9319066e6a";
  }

  static const char* value(const ::duckietown_msgs::GetVariable&) { return value(); }
};

template<>
struct DataType< ::duckietown_msgs::GetVariable > {
  static const char* value()
  {
    return "duckietown_msgs/GetVariable";
  }

  static const char* value(const ::duckietown_msgs::GetVariable&) { return value(); }
};


// service_traits::MD5Sum< ::duckietown_msgs::GetVariableRequest> should match
// service_traits::MD5Sum< ::duckietown_msgs::GetVariable >
template<>
struct MD5Sum< ::duckietown_msgs::GetVariableRequest>
{
  static const char* value()
  {
    return MD5Sum< ::duckietown_msgs::GetVariable >::value();
  }
  static const char* value(const ::duckietown_msgs::GetVariableRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::duckietown_msgs::GetVariableRequest> should match
// service_traits::DataType< ::duckietown_msgs::GetVariable >
template<>
struct DataType< ::duckietown_msgs::GetVariableRequest>
{
  static const char* value()
  {
    return DataType< ::duckietown_msgs::GetVariable >::value();
  }
  static const char* value(const ::duckietown_msgs::GetVariableRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::duckietown_msgs::GetVariableResponse> should match
// service_traits::MD5Sum< ::duckietown_msgs::GetVariable >
template<>
struct MD5Sum< ::duckietown_msgs::GetVariableResponse>
{
  static const char* value()
  {
    return MD5Sum< ::duckietown_msgs::GetVariable >::value();
  }
  static const char* value(const ::duckietown_msgs::GetVariableResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::duckietown_msgs::GetVariableResponse> should match
// service_traits::DataType< ::duckietown_msgs::GetVariable >
template<>
struct DataType< ::duckietown_msgs::GetVariableResponse>
{
  static const char* value()
  {
    return DataType< ::duckietown_msgs::GetVariable >::value();
  }
  static const char* value(const ::duckietown_msgs::GetVariableResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_GETVARIABLE_H
