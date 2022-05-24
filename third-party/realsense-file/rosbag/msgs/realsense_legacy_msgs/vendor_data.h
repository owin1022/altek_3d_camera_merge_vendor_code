// Generated by gencpp from file realsense_legacy_msgs/vendor_data.msg
// DO NOT EDIT!


#ifndef realsense_legacy_msgs_MESSAGE_VENDOR_DATA_H
#define realsense_legacy_msgs_MESSAGE_VENDOR_DATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace realsense_legacy_msgs
{
template <class ContainerAllocator>
struct vendor_data_
{
  typedef vendor_data_<ContainerAllocator> Type;

  vendor_data_()
    : name()
    , value()  {
    }
  vendor_data_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _value_type;
  _value_type value;




  typedef std::shared_ptr< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> const> ConstPtr;

}; // struct vendor_data_

typedef ::realsense_legacy_msgs::vendor_data_<std::allocator<void> > vendor_data;

typedef std::shared_ptr< ::realsense_legacy_msgs::vendor_data > vendor_dataPtr;
typedef std::shared_ptr< ::realsense_legacy_msgs::vendor_data const> vendor_dataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> & v)
{
rs2rosinternal::message_operations::Printer< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace realsense_legacy_msgs

namespace rs2rosinternal
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'realsense_legacy_msgs': ['/home/administrator/realsense_ros_file/realsense_file/realsense_legacy_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc6ccc4a57f61779c8eaae61e9f422e0";
  }

  static const char* value(const ::realsense_legacy_msgs::vendor_data_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc6ccc4a57f61779ULL;
  static const uint64_t static_value2 = 0xc8eaae61e9f422e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "realsense_legacy_msgs/vendor_data";
  }

  static const char* value(const ::realsense_legacy_msgs::vendor_data_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
string value\n\
";
  }

  static const char* value(const ::realsense_legacy_msgs::vendor_data_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace rs2rosinternal

namespace rs2rosinternal
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct vendor_data_

} // namespace serialization
} // namespace rs2rosinternal

namespace rs2rosinternal
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::realsense_legacy_msgs::vendor_data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::realsense_legacy_msgs::vendor_data_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace rs2rosinternal

#endif // realsense_legacy_msgs_MESSAGE_VENDOR_DATA_H
