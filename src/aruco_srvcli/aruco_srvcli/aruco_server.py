from tutorial_interfaces.srv import Imagesrv
import rclpy
from rclpy.node import Node
import cv2
from cv_bridge import CvBridge
bridge=CvBridge()

class Aruco_tag(Node):

    def __init__(self):
        super().__init__('aruco_srv')
        self.srv = self.create_service(Imagesrv, 'image_processing', self.cv_process_callback)

    def cv_process_callback(self, request, response):

        arucoDict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_4X4_250)
        arucoParams = cv2.aruco.DetectorParameters()
        req_im=bridge.imgmsg_to_cv2(request.image)
        detector= cv2.aruco.ArucoDetector(arucoDict,arucoParams)
        (corners, ids, rejected)=detector.detectMarkers(req_im)
        response.corners=[]
        n=0
        while(True):
            try:
                for k in range(4):
                    for j in range(2):
                        response.corners.append(int(corners[n][0][k][j]))
                n=n+1
            except IndexError:
                break
        
        response.ids=[]
        try:    
            for i in ids:
                response.ids.append(int(i))
            #k=0
            #if k==0:
            #    cv2.imshow('frame',cv2.aruco.drawDetectedMarkers(req_im,corners,ids))
            #    k=k+1
        except TypeError:
            response.ids=[]
        finally:
            print("Response sent successfully")
            return response
def main(args=None):
    rclpy.init(args=args)

    aruco_srv = Aruco_tag()

    rclpy.spin(aruco_srv)

    rclpy.shutdown()

if __name__ == '__main__':
    main()
