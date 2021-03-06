// Generated by gencpp from file duckietown_msgs/SetCustomLEDPatternResponse.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_SETCUSTOMLEDPATTERNRESPONSE_H
#define DUCKIETOWN_MSGS_MESSAGE_SETCUSTOMLEDPATTERNRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace duckietown_msgs
{
template <class ContainerAllocator>
struct SetCustomLEDPatternResponse_
{
  typedef SetCustomLEDPatternResponse_<ContainerAllocator> Type;

  SetCustomLEDPatternResponse_()
    {
    }
  SetCustomLEDPatternResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetCustomLEDPatternResponse_

typedef ::duckietown_msgs::SetCustomLEDPatternResponse_<std::allocator<void> > SetCustomLEDPatternResponse;

typedef boost::shared_ptr< ::duckietown_msgs::SetCustomLEDPatternResponse > SetCustomLEDPatternResponsePtr;
typedef boost::shared_ptr< ::duckietown_msgs::SetCustomLEDPatternResponse const> SetCustomLEDPatternResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/SetCustomLEDPatternResponse";
  }

  static const char* value(const ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetCustomLEDPatternResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::duckietown_msgs::SetCustomLEDPatternResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_SETCUSTOMLEDPATTERNRESPONSE_H
