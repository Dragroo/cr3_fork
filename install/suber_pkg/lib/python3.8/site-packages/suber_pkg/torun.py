#!/usr/bin/env python3
# -*- coding: utf-8 -*-


import rclpy                                     # ROS2 Python接口库
from rclpy.node   import Node                    # ROS2 节点类
from std_msgs.msg import String                  # ROS2标准定义的String消息
from geometry_msgs.msg import PoseStamped
from geometry_msgs.msg import Pose
from numpy import *


import numpy as np
import numpy.matlib as mat

# 计算一个4x4的旋转矩阵
def rot2mat(x,y,z,w,px,py,pz):
  rotmat=np.eye(4)
  rotmat[0][0]=1-2*(y**2+z**2)
  rotmat[0][1]=2*(x*y-w*z)
  rotmat[0][2]=2*(x*z+w*y)
  rotmat[1][0]=2*(x*y+w*z)
  rotmat[1][1]=1-2*(x**2+z**2)
  rotmat[1][2]=2*(y*z-w*x)
  rotmat[2][0]=2*(x*z-w*y)
  rotmat[2][1]=2*(y*z+w*x)
  rotmat[2][2]=1-2*(x**2+y**2)
  rotmat[0][3]=px
  rotmat[1][3]=py
  rotmat[2][3]=pz
  rotmat[3]=[0.0,0.0,0.0,1]
  return rotmat

# 像素坐标转相机坐标
def uv2cam(u,v,zc,inmat):
  uvmat=np.zeros((4,1))
  uvmat[0]=u*zc
  uvmat[1]=v*zc
  uvmat[2]=1*zc
  uvmat[3]=1*zc
  inmat=np.eye(3) # 内参矩阵
  '''
  扩展为4x4的矩阵
  '''
  Cols=np.zeros((3,1)) 
  inmat34=np.c_(inmat,Cols)
  Rows=np.array([[0.0,0.0,0.0,1.0]])
  inmat44=np.r_(inmat34,Rows)
  inmat44=np.linalg.inv(inmat44) # 对内参矩阵求逆
  result=np.matmul(inmat44,uvmat)
  return result # 获得一个4x1的矩阵，即相机坐标

def cam2world(outmat,cammat):
  outmat=np.eye(4) # 外参矩阵作为参数输入
  cammat=np.zeros((4,1)) # 相机坐标
  outmat=np.linalg.inv(outmat)
  result=np.matmul(outmat,cammat)
  return result


class SubscriberNode(Node):
    
    def __init__(self, name):
        super().__init__(name)                                    # ROS2节点父类初始化
        self.sub = self.create_subscription(\
            PoseStamped, "my_trajectory", self.listener_callback, 10)        # 创建订阅者对象（消息类型、话题名、订阅者回调函数、队列长度）
        self.pose=Pose()

    def listener_callback(self, msg):                             # 创建回调函数，执行收到话题消息后对数据的处理
        self.get_logger().info('I heard: "%.3f"' % msg.pose.position.x)        # 输出日志信息，提示订阅收到的话题消息
        px=msg.pose.position.x
        py=msg.pose.position.y
        pz=msg.pose.position.z
        ow=msg.pose.orientation.w
        ox=msg.pose.orientation.x
        oy=msg.pose.orientation.y
        oz=msg.pose.orientation.z
        self.posemat=rot2mat(ox,oy,oz,ow,px,py,pz)
        

def main(args=None):                                 # ROS2节点主入口main函数
    rclpy.init(args=args)                            # ROS2 Python接口初始化
    node = SubscriberNode("topic_helloworld_sub")    # 创建ROS2节点对象并进行初始化
    rclpy.spin(node)                                 # 循环等待ROS2退出
    node.destroy_node()                              # 销毁节点对象
    rclpy.shutdown()                                 # 关闭ROS2 Python接口