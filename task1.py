"""
import cv2
import numpy as np

img =cv2.imread("yellow_detect.jpeg")
img =cv2.resize(img,(600,400))
#img =cv2.rectangle(img,(250,190),(300,220),(255,255,0),2)
#print(img)
cv2.imshow("original image",img)

#def find_coord(event,x,y,flags,params):
   # if event ==cv2.EVENT_FLAG_LBUTTON:
       # print(x,y)
       # font=cv2.FONT_HERSHEY_PLAIN
       #cv2.putText(img,str(x) +','+str(y),(x,y),font,1(255,0,0))
       # cv2.imshow("img1",img)

#cv2.setMouseCallback("img1",find_coord)
#.imshow("img1",img)
cv2.waitKey(0)
cv2.destroyAllWindows()
"""
