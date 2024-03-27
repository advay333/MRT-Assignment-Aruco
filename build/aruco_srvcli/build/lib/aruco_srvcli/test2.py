# importing libraries 
import cv2 
import numpy as np 

# Create a VideoCapture object and read from input file 
cap = cv2.VideoCapture("/home/advay/mrt/src/aruco_srvcli/aruco_srvcli/Aruco_1.mp4") 

# Check if camera opened successfully 
if (cap.isOpened()== False): 
	print("Error opening video file") 

# Read until video is completed 
while(cap.isOpened()): 
	
# Capture frame-by-frame 
	ret, frame = cap.read() 
	if ret == True:
            arucoDict = cv2.aruco.getPredefinedDictionary(cv2.aruco.DICT_6X6_250)
            arucoParams = cv2.aruco.DetectorParameters()
            detector= cv2.aruco.ArucoDetector(arucoDict,arucoParams)
            (corners, ids, rejected)=detector.detectMarkers(frame)      
            cv2.imshow('Frame', cv2.aruco.drawDetectedMarkers(frame,corners,ids))
            if cv2.waitKey(25) & 0xFF == ord('q'): 
                break
    
# When everything done, release
# the video capture object 
cap.release() 

# Closes all the frames 
cv2.destroyAllWindows() 
