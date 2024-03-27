from tutorial_interfaces.srv import Imagesrv

import rclpy
from rclpy.node import Node

import cv2
from cv_bridge import CvBridge
bridge=CvBridge()
import numpy as np 
from std_msgs.msg import String
from sensor_msgs.msg import Image

class Aruco_image(Node):

    def __init__(self):
        super().__init__('aruco_cli')
        self.cli = self.create_client(Imagesrv, 'image_processing')    
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Imagesrv.Request()                                  

    def send_request(self,msg):
        self.req.image=msg
        self.future = self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)

    path=input("Enter the file path:") 
    vid = cv2.VideoCapture(path) 
    if (vid.isOpened()== False): 
        print("Error opening video file")
    while(vid.isOpened()): 
        ret, frame = vid.read()
        msg=bridge.cv2_to_imgmsg(frame)
        if ret == True:
            aruco_cli = Aruco_image()
            aruco_cli.send_request(msg)

            while rclpy.ok():
                rclpy.spin_once(aruco_cli)
                if aruco_cli.future.done():
                    try:
                        response = aruco_cli.future.result()
                    except Exception as e:
                        aruco_cli.get_logger().info(
                            'Service call failed %r' % (e,))
                    else:
                        aruco_cli.get_logger().info('successfully received') 
                    break
            n=int(len(response.corners)/8)
            for i in range(n):
                print("Coordinates of marker %s are:"%(i+1))
                for j in range(4):
                    print("[%s,%s]"%(response.corners[2*j],response.corners[2*j+1]))

            if n!=0:
                print("The IDs are:")
                for i in response.ids:
                    print(i)
            else:
                print("No markers found")
        else:
            break
    aruco_cli.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

