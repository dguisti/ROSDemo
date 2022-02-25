// Generated by gencpp from file duckietown_msgs/KinematicsParameters.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_KINEMATICSPARAMETERS_H
#define DUCKIETOWN_MSGS_MESSAGE_KINEMATICSPARAMETERS_H


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
struct KinematicsParameters_
{
  typedef KinematicsParameters_<ContainerAllocator> Type;

  KinematicsParameters_()
    : parameters()  {
    }
  KinematicsParameters_(const ContainerAllocator& _alloc)
    : parameters(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _parameters_type;
  _parameters_type parameters;





  typedef boost::shared_ptr< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> const> ConstPtr;

}; // struct KinematicsParameters_

typedef ::duckietown_msgs::KinematicsParameters_<std::allocator<void> > KinematicsParameters;

typedef boost::shared_ptr< ::duckietown_msgs::KinematicsParameters > KinematicsParametersPtr;
typedef boost::shared_ptr< ::duckietown_msgs::KinematicsParameters const> KinematicsParametersConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::duckietown_msgs::KinematicsParameters_<ContainerAllocator1> & lhs, const ::duckietown_msgs::KinematicsParameters_<ContainerAllocator2> & rhs)
{
  return lhs.parameters == rhs.parameters;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::duckietown_msgs::KinematicsParameters_<ContainerAllocator1> & lhs, const ::duckietown_msgs::KinematicsParameters_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cbca57679564ab84ca723072e3bf6226";
  }

  static const char* value(const ::duckietown_msgs::KinematicsParameters_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcbca57679564ab84ULL;
  static const uint64_t static_value2 = 0xca723072e3bf6226ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/KinematicsParameters";
  }

  static const char* value(const ::duckietown_msgs::KinematicsParameters_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] parameters\n"
;
  }

  static const char* value(const ::duckietown_msgs::KinematicsParameters_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.parameters);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KinematicsParameters_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::KinematicsParameters_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::KinematicsParameters_<ContainerAllocator>& v)
  {
    s << indent << "parameters[]" << std::endl;
    for (size_t i = 0; i < v.parameters.size(); ++i)
    {
      s << indent << "  parameters[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.parameters[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_KINEMATICSPARAMETERS_H