#!/usr/bin/env python3
# -*- coding: utf-8 -*-


import rclpy                                     # ROS2 Python接口库
from rclpy.node   import Node                    # ROS2 节点类
from std_msgs.msg import String                  # ROS2标准定义的String消息
from geometry_msgs.msg import PoseStamped
from geometry_msgs.msg import Pose
from my_interfaces.msg import Outpose
import numpy as np
import math

def eular2mat(x,y,z,rx,ry,rz):
    rxmat=np.array([[1.0,0.0,0.0],[0.0,math.cos(rx),-math.sin(rx)],[0.0,math.sin(rx),math.cos(rx)]]);
    rymat=np.array([[math.cos(ry),0.0,math.sin(ry)]])

class SubscriberNode(Node):
    
    def __init__(self, name):
        super().__init__(name)                                    # ROS2节点父类初始化
        self.subuv = self.create_subscription(\
            PoseStamped, "my_trajectory", self.uvlistener_callback, 10)        # 创建订阅者对象（消息类型、话题名、订阅者回调函数、队列长度）
        self.inmatrix=np.array([[400.0,0.0,400.0],[0,300.0,300.0],[0.0,0.0,1.0]],dtype=float)
        self.outpose = self.create_subscription(\
            Outpose, "my_outpose", self.outpose_callback, 10) 
        self.pose=Pose()
        self.outpose=Outpose()

    def uvlistener_callback(self, msg):                             # 创建回调函数，执行收到话题消息后对数据的处理
        self.get_logger().info('I heard: "%.3f"' % msg.pose.position.x)        # 输出日志信息，提示订阅收到的话题消息
        pu=msg.pose.position.x
        pv=msg.pose.position.y
    
    def outmat_callback(self,msg):
        self.get_logger().info("I heard outpose.")
        ox=msg.x
        oy=msg.y
        oz=msg.z
        rx=msg.rx
        ry=msg.ry
        rz=msg.rz


        

def main(args=None):                                 # ROS2节点主入口main函数
    rclpy.init(args=args)                            # ROS2 Python接口初始化
    node = SubscriberNode("topic_helloworld_sub")    # 创建ROS2节点对象并进行初始化
    rclpy.spin(node)                                 # 循环等待ROS2退出
    node.destroy_node()                              # 销毁节点对象
    rclpy.shutdown()                                 # 关闭ROS2 Python接口