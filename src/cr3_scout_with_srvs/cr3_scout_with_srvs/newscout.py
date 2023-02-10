#!/usr/bin/python3
# -*- coding: utf-8 -*-
from __future__ import print_function
import cr3_scout_with_srvs.cr3_service_clients
import rclpy
import time
from rclpy.node import Node
from scout_interfaces_msg import ObjectCentInfo
from scout_interfaces_msg import ObjectWorld

class ObjectWorldPubNewDemo(Node):
    def __init__(self):
        super().__init__('object_world_pub')
        
        self.object_subscriber = self.create_subscription(ObjectCentInfo, 'object_cent_info', self.object_world_compute, 50)
        
        # self.object_subscriber = message_filters.Subscriber(self, ObjectPixelTfMixed, 'object_pixel_tf_mixed_info')      
        # self.intrin_matrix_subscriber = message_filters.Subscriber(self, CameraIntrin, 'camera_intrin_info')
        
        print("ready")
        # tss = message_filters.ApproximateTimeSynchronizer([self.object_subscriber, self.intrin_matrix_subscriber], 10, 0.05)
        # tss.registerCallback(self.object_world_compute)
        
        self.object_world_pub = self.create_publisher(ObjectWorld, 'object_world_info', 10)   
        # timer_period = 0.5  # seconds
        # self.timer = self.create_timer(timer_period, self.object_world_pub_callback)        
        
        self.to_pub = ObjectWorld()  
        self.to_pub.header.stamp = self.get_clock().now().to_msg()
        self.to_pub.object_label = 'test'
        self.to_pub.object_world_x = 0.0
        self.to_pub.object_world_y = 0.0
        self.to_pub.object_world_z = 0.0     
        
        self.para_name = 'gazebo_left'
        # print(para_name)
        self.declare_parameter(name=self.para_name)    
        self.object_name = "person_standing5"   
        self.declare_parameter(name=self.object_name)   
        
        self.pixel_width = 640 
        self.pixel_height = 480
        
        self.plt_x = []
        self.plt_y = []
        self.count = 0


def main(args=None):
    rclpy.init(args=args)
    
    print("Scout: Hello\n")
    current_clients = cr3_scout_with_srvs.cr3_service_clients.ServiceClientsDemo()

    print(current_clients.enable_client())


    print(current_clients.clear_client())

    print(current_clients.speedj_client(20))
    print(current_clients.accj_client(20))
    time.sleep(5.0)
    time.sleep(5.0)
    
    # print(current_clients.movj_client(-47.0,-234.0,730.0,90.0,0.0,-180.0))
    # time.sleep(5.0)

    j1_state = -175.0
    j4_state = 60.0
    up_or_down = -1
    iteration_number = 35

    print(current_clients.jointmovj_client(j1_state,0.0,0.0,j4_state, 90.0, 0.0))
    time.sleep(3.0)

    # for i in range(iteration_number):
    #     j1_state += 10.0
    #     if up_or_down==-1:
    #         j4_state -= 120.0
    #     else:
    #         j4_state += 120.0
    #     print(current_clients.jointmovj_client(j1_state,0.0,0.0,j4_state, 90.0, 0.0))
    #     time.sleep(2.0)
    #     up_or_down *= -1

    # print(current_clients.jointmovj_client(0.0,0.0,0.0,0.0,0.0,0.0))
    # time.sleep(5.0)
    # print(current_clients.jointmovj_client(172.0,0.0,-150.0,-35.0,0.0,0.0))
    # time.sleep(2.0)




