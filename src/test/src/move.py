#!/usr/bin/env python

import rospy
from std_msgs.msg import String
from duckietown.dtros import DTROS, NodeType, TopicType
from duckietown_msgs.msg import Twist2DStamped, BoolStamped


class MyPublisherNode(DTROS):
    def __init__(self, node_name):
        super(MyPublisherNode, self).__init__(
            node_name=node_name, node_type=NodeType.CONTROL)

        self.pub = rospy.Publisher('/filipsduckie/joy_mapper_node/car_cmd',
                                   Twist2DStamped, queue_size=1, dt_topic_type=TopicType.CONTROL)

        self.speed = 0  # .5
        self.omega = 0.1

        rospy.loginfo("Running...")

    def run(self):
        rate = rospy.Rate(2)
        while not rospy.is_shutdown():
            msg = Twist2DStamped()
            msg.header.stamp = rospy.get_rostime()

            msg.v = self.speed
            msg.omega = self.omega

            rospy.loginfo("Publishing message")

            self.pub.publish(msg)
            rate.sleep()


if __name__ == '__main__':
    try:
        rospy.loginfo("Starting node")
        node = MyPublisherNode(node_name='my_publisher_node')
        node.run()
    except rospy.ROSInterruptException:
        pass
