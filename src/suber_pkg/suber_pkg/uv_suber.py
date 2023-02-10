#!/usr/bin/env python3
# -*- coding: utf-8 -*-

from __future__ import print_function
import cr3_scout_with_srvs.cr3_service_clients
import rclpy                                     # ROS2 Python接口库
from rclpy.node   import Node                    # ROS2 节点类
from std_msgs.msg import String                  # ROS2标准定义的String消息
import numpy as np
from my_interfaces.msg import Myuv
"""
创建一个订阅者节点，测试
"""
class SubscriberNode(Node):
    
    def __init__(self, name):
        super().__init__(name)                                    # ROS2节点父类初始化
        self.sub = self.create_subscription(\
            Myuv, "my_uv", self.listener_callback, 10)        # 创建订阅者对象（消息类型、话题名、订阅者回调函数、队列长度）
        self.cr3_clients=cr3_scout_with_srvs.cr3_service_clients.ServiceClientsDemo()
        print(self.cr3_clients.enable_client())
        print(self.cr3_clients.clear_client())
        print(self.cr3_clients.speedj_client(20))
        print(self.cr3_clients.accj_client(20))

    def listener_callback(self, msg):                             # 创建回调函数，执行收到话题消息后对数据的处理
        self.get_logger().info('I heard: "%s"' % msg.u)        # 输出日志信息，提示订阅收到的话题消息
        self.get_logger().info('I heard: "%s"' % msg.v)
        distance_x=msg.u-968.5
        distance_y=msg.v-548.5
        
        
def main(args=None):                                 # ROS2节点主入口main函数
    rclpy.init(args=args)                    # ROS2 Python接口初始化
    node = SubscriberNode("topic_uv_sub")    # 创建ROS2节点对象并进行初始化
    rclpy.spin(node)                                 # 循环等待ROS2退出
    node.destroy_node()                              # 销毁节点对象
    rclpy.shutdown()                                 # 关闭ROS2 Python接口