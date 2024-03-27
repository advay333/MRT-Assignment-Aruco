import cv2 
from cv_bridge import CvBridge
bridge=CvBridge()
path="/home/advay/mrt/src/aruco_srvcli/aruco_srvcli/trials.png"
og_img=cv2.imread(path)
frame=bridge.cv2_to_imgmsg(cv2.imread(path,cv2.IMREAD_COLOR))
frame2=bridge.imgmsg_to_cv2(frame)
arucoDict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_4X4_250)
arucoParams = cv2.aruco.DetectorParameters()
detector= cv2.aruco.ArucoDetector(arucoDict,arucoParams)
(corners, ids, rejected)=detector.detectMarkers(og_img)
print(corners)
print(ids)
print(rejected)
cv2.imshow('frame2',cv2.aruco.drawDetectedMarkers(og_img,corners,ids))
cv2.waitKey(0) 
  
# closing all open windows 
cv2.destroyAllWindows()