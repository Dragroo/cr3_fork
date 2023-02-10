// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_bringup_msg:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_BRINGUP_MSG__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define DOBOT_BRINGUP_MSG__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RobotStatus in the package dobot_bringup_msg.
typedef struct dobot_bringup_msg__msg__RobotStatus
{
  bool is_enable;
  bool is_connected;
} dobot_bringup_msg__msg__RobotStatus;

// Struct for a sequence of dobot_bringup_msg__msg__RobotStatus.
typedef struct dobot_bringup_msg__msg__RobotStatus__Sequence
{
  dobot_bringup_msg__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_bringup_msg__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_BRINGUP_MSG__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
