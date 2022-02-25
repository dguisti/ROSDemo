// Generated by gencpp from file duckietown_msgs/Twist2DStamped.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_TWIST2DSTAMPED_H
#define DUCKIETOWN_MSGS_MESSAGE_TWIST2DSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct Twist2DStamped_
{
  typedef Twist2DStamped_<ContainerAllocator> Type;

  Twist2DStamped_()
    : header()
    , v(0.0)
    , omega(0.0)  {
    }
  Twist2DStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , v(0.0)
    , omega(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _v_type;
  _v_type v;

   typedef float _omega_type;
  _omega_type omega;





  typedef boost::shared_ptr< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> const> ConstPtr;

}; // struct Twist2DStamped_

typedef ::duckietown_msgs::Twist2DStamped_<std::allocator<void> > Twist2DStamped;

typedef boost::shared_ptr< ::duckietown_msgs::Twist2DStamped > Twist2DStampedPtr;
typedef boost::shared_ptr< ::duckietown_msgs::Twist2DStamped const> Twist2DStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::Twist2DStamped_<ContainerAllocator1> & lhs, const ::duckietown_msgs::Twist2DStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.v == rhs.v &&
    lhs.omega == rhs.omega;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::Twist2DStamped_<ContainerAllocator1> & lhs, const ::duckietown_msgs::Twist2DStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3fc0942a3082e78d7ded4a58ea1e2d0c";
  }

  static const char* value(const ::duckietown_msgs::Twist2DStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3fc0942a3082e78dULL;
  static const uint64_t static_value2 = 0x7ded4a58ea1e2d0cULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/Twist2DStamped";
  }

  static const char* value(const ::duckietown_msgs::Twist2DStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32 v\n"
"float32 omega\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::duckietown_msgs::Twist2DStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.v);
      stream.next(m.omega);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Twist2DStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::Twist2DStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::Twist2DStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "v: ";
    Printer<float>::stream(s, indent + "  ", v.v);
    s << indent << "omega: ";
    Printer<float>::stream(s, indent + "  ", v.omega);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_TWIST2DSTAMPED_H
