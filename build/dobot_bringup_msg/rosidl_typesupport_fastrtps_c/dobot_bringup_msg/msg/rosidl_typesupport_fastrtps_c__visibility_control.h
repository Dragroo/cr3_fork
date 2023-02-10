// generated from
// rosidl_typesupport_fastrtps_c/resource/rosidl_typesupport_fastrtps_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_MSG__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
#define DOBOT_BRINGUP_MSG__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_dobot_bringup_msg __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_bringup_msg __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_dobot_bringup_msg __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_bringup_msg __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_C_BUILDING_DLL_dobot_bringup_msg
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_bringup_msg ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_dobot_bringup_msg
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_bringup_msg ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_bringup_msg
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_dobot_bringup_msg __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_bringup_msg
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_bringup_msg __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_bringup_msg
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // DOBOT_BRINGUP_MSG__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
