// Generated by gencpp from file duckietown_msgs/ParamTuner.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_PARAMTUNER_H
#define DUCKIETOWN_MSGS_MESSAGE_PARAMTUNER_H


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
struct ParamTuner_
{
  typedef ParamTuner_<ContainerAllocator> Type;

  ParamTuner_()
    : header()
    , cross_track_err(0.0)
    , cross_track_integral(0.0)
    , diff_cross_track_err(0.0)
    , heading_err(0.0)
    , heading_integral(0.0)
    , diff_heading_err(0.0)
    , dt(0.0)  {
    }
  ParamTuner_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cross_track_err(0.0)
    , cross_track_integral(0.0)
    , diff_cross_track_err(0.0)
    , heading_err(0.0)
    , heading_integral(0.0)
    , diff_heading_err(0.0)
    , dt(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _cross_track_err_type;
  _cross_track_err_type cross_track_err;

   typedef float _cross_track_integral_type;
  _cross_track_integral_type cross_track_integral;

   typedef float _diff_cross_track_err_type;
  _diff_cross_track_err_type diff_cross_track_err;

   typedef float _heading_err_type;
  _heading_err_type heading_err;

   typedef float _heading_integral_type;
  _heading_integral_type heading_integral;

   typedef float _diff_heading_err_type;
  _diff_heading_err_type diff_heading_err;

   typedef float _dt_type;
  _dt_type dt;





  typedef boost::shared_ptr< ::duckietown_msgs::ParamTuner_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::ParamTuner_<ContainerAllocator> const> ConstPtr;

}; // struct ParamTuner_

typedef ::duckietown_msgs::ParamTuner_<std::allocator<void> > ParamTuner;

typedef boost::shared_ptr< ::duckietown_msgs::ParamTuner > ParamTunerPtr;
typedef boost::shared_ptr< ::duckietown_msgs::ParamTuner const> ParamTunerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::ParamTuner_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::ParamTuner_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::ParamTuner_<ContainerAllocator1> & lhs, const ::duckietown_msgs::ParamTuner_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.cross_track_err == rhs.cross_track_err &&
    lhs.cross_track_integral == rhs.cross_track_integral &&
    lhs.diff_cross_track_err == rhs.diff_cross_track_err &&
    lhs.heading_err == rhs.heading_err &&
    lhs.heading_integral == rhs.heading_integral &&
    lhs.diff_heading_err == rhs.diff_heading_err &&
    lhs.dt == rhs.dt;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::ParamTuner_<ContainerAllocator1> & lhs, const ::duckietown_msgs::ParamTuner_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::ParamTuner_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::ParamTuner_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::ParamTuner_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::ParamTuner_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::ParamTuner_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::ParamTuner_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::ParamTuner_<ContainerAllocator> >
{
  static const char* value()
  {
    return "53c42bf2be1bd4386da34eca6088702d";
  }

  static const char* value(const ::duckietown_msgs::ParamTuner_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x53c42bf2be1bd438ULL;
  static const uint64_t static_value2 = 0x6da34eca6088702dULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::ParamTuner_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/ParamTuner";
  }

  static const char* value(const ::duckietown_msgs::ParamTuner_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::ParamTuner_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32 cross_track_err\n"
"float32 cross_track_integral\n"
"float32 diff_cross_track_err\n"
"float32 heading_err\n"
"float32 heading_integral\n"
"float32 diff_heading_err\n"
"float32 dt\n"
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

  static const char* value(const ::duckietown_msgs::ParamTuner_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::ParamTuner_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cross_track_err);
      stream.next(m.cross_track_integral);
      stream.next(m.diff_cross_track_err);
      stream.next(m.heading_err);
      stream.next(m.heading_integral);
      stream.next(m.diff_heading_err);
      stream.next(m.dt);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ParamTuner_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::ParamTuner_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::ParamTuner_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cross_track_err: ";
    Printer<float>::stream(s, indent + "  ", v.cross_track_err);
    s << indent << "cross_track_integral: ";
    Printer<float>::stream(s, indent + "  ", v.cross_track_integral);
    s << indent << "diff_cross_track_err: ";
    Printer<float>::stream(s, indent + "  ", v.diff_cross_track_err);
    s << indent << "heading_err: ";
    Printer<float>::stream(s, indent + "  ", v.heading_err);
    s << indent << "heading_integral: ";
    Printer<float>::stream(s, indent + "  ", v.heading_integral);
    s << indent << "diff_heading_err: ";
    Printer<float>::stream(s, indent + "  ", v.diff_heading_err);
    s << indent << "dt: ";
    Printer<float>::stream(s, indent + "  ", v.dt);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_PARAMTUNER_H
