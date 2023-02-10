#!/usr/bin/env python3
# -*- coding: utf-8 -*-


import rclpy                                              # ROS2 Python接口库
from rclpy.node import Node                               # ROS2 节点类
import numpy as np
from my_interfaces.msg import Myuv

class uvListener(Node):

    def __init__(self, name):
        super().__init__(name)                                      # ROS2节点父类初始化
        self.pub=self.create_publisher(Myuv,"my_uv",10)
        self.timer = self.create_timer(0.5, self.on_timer)          # 创建一个固定周期的定时器，处理坐标信息
        self.d2point=Myuv()    
        self.vline=np.arange(498.5,598.0,5.0)
        self.uline=np.arange(918.5,1018.0,5.0)
        self.uvlineIndex=19

    def on_timer(self):
        
        my_uv=Myuv()
        my_uv.stamp=self.get_clock().now().to_msg()
        my_uv.u=self.uline[self.uvlineIndex]
        my_uv.v=self.vline[self.uvlineIndex]
        if(self.uvlineIndex>0):
            self.uvlineIndex-=1
        elif(self.uvlineIndex==0):
            self.uvlineIndex=-19
        elif(self.uvlineIndex==-1):
            self.uvlineIndex=18
        else:
            self.uvlineIndex+=1
        self.pub.publish(my_uv)
        self.get_logger().info("我正在发送(u: %.2f, v: %.2f): " %(my_uv.u,my_uv.v))

        

        

def main(args=None):
    rclpy.init(args=args)                       # ROS2 Python接口初始化
    node = uvListener("uv_listener")            # 创建ROS2节点对象并进行初始化
    rclpy.spin(node)                            # 循环等待ROS2退出
    node.destroy_node()                         # 销毁节点对象
    rclpy.shutdown()                            # 关闭ROS2 Python接口
