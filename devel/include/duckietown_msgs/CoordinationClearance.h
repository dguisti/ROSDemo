// Generated by gencpp from file duckietown_msgs/CoordinationClearance.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_COORDINATIONCLEARANCE_H
#define DUCKIETOWN_MSGS_MESSAGE_COORDINATIONCLEARANCE_H


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
struct CoordinationClearance_
{
  typedef CoordinationClearance_<ContainerAllocator> Type;

  CoordinationClearance_()
    : header()
    , status(0)  {
    }
  CoordinationClearance_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , status(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int8_t _status_type;
  _status_type status;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NA)
  #undef NA
#endif
#if defined(_WIN32) && defined(WAIT)
  #undef WAIT
#endif
#if defined(_WIN32) && defined(GO)
  #undef GO
#endif

  enum {
    NA = -1,
    WAIT = 0,
    GO = 1,
  };


  typedef boost::shared_ptr< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> const> ConstPtr;

}; // struct CoordinationClearance_

typedef ::duckietown_msgs::CoordinationClearance_<std::allocator<void> > CoordinationClearance;

typedef boost::shared_ptr< ::duckietown_msgs::CoordinationClearance > CoordinationClearancePtr;
typedef boost::shared_ptr< ::duckietown_msgs::CoordinationClearance const> CoordinationClearanceConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::CoordinationClearance_<ContainerAllocator1> & lhs, const ::duckietown_msgs::CoordinationClearance_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::CoordinationClearance_<ContainerAllocator1> & lhs, const ::duckietown_msgs::CoordinationClearance_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "863863237538fdb5f0d38c0c62b294db";
  }

  static const char* value(const ::duckietown_msgs::CoordinationClearance_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x863863237538fdb5ULL;
  static const uint64_t static_value2 = 0xf0d38c0c62b294dbULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/CoordinationClearance";
  }

  static const char* value(const ::duckietown_msgs::CoordinationClearance_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"int8 status\n"
"\n"
"int8 NA=-1\n"
"int8 WAIT=0\n"
"int8 GO=1\n"
"\n"
"\n"
"\n"
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

  static const char* value(const ::duckietown_msgs::CoordinationClearance_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CoordinationClearance_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::CoordinationClearance_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::CoordinationClearance_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_COORDINATIONCLEARANCE_H
