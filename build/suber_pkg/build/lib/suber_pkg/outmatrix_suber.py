#!/usr/bin/env python3
# -*- coding: utf-8 -*-


import rclpy                                     # ROS2 Python接口库
from rclpy.node   import Node                    # ROS2 节点类
from std_msgs.msg import String                  # ROS2标准定义的String消息
from geometry_msgs.msg import PoseStamped
from geometry_msgs.msg import Pose
from numpy import *

class SubscriberNode(Node):
    
    def __init__(self, name):
        super().__init__(name)                                    # ROS2节点父类初始化
        self.sub = self.create_subscription(\
            PoseStamped, "my_trajectory", self.listener_callback, 10)        # 创建订阅者对象（消息类型、话题名、订阅者回调函数、队列长度）
        self.pose=Pose()

    def listener_callback(self, msg):                             # 创建回调函数，执行收到话题消息后对数据的处理
        self.get_logger().info('I heard: "%.3f"' % msg.pose.position.x)        # 输出日志信息，提示订阅收到的话题消息
        self.pose.position.x=msg.pose.position.x
        self.pose.position.y=msg.pose.position.y
        self.pose.position.z=msg.pose.position.z
        self.pose.orientation.w=msg.pose.orientation.w
        self.pose.orientation.x=msg.pose.orientation.x
        self.pose.orientation.y=msg.pose.orientation.y
        self.pose.orientation.z=msg.pose.orientation.z
        

def main(args=None):                                 # ROS2节点主入口main函数
    rclpy.init(args=args)                            # ROS2 Python接口初始化
    node = SubscriberNode("topic_helloworld_sub")    # 创建ROS2节点对象并进行初始化
    rclpy.spin(node)                                 # 循环等待ROS2退出
    node.destroy_node()                              # 销毁节点对象
    rclpy.shutdown()                                 # 关闭ROS2 Python接口