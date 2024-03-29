##import cv2
##import pytesseract
##from PIL import Image
##import numpy as np
##import requests
##
##
### ESP32 URL
##URL = 'http://192.168.199.24'
##AWB = True
##
### Face recognition and opencv setup
##cap = cv2.VideoCapture(URL + ":81/stream")
##
##print("in")
##
##def set_resolution(url: str, index: int=1, verbose: bool=False):
##    try:
##        if verbose:
##            resolutions = "10: UXGA(1600x1200)\n9: SXGA(1280x1024)\n8: XGA(1024x768)\n7: SVGA(800x600)\n6: VGA(640x480)\n5: CIF(400x296)\n4: QVGA(320x240)\n3: HQVGA(240x176)\n0: QQVGA(160x120)"
##            print("available resolutions\n{}".format(resolutions))
##
##        if index in [10, 9, 8, 7, 6, 5, 4, 3, 0]:
##            requests.get(url + "/control?var=framesize&val={}".format(index))
##        else:
##            print("Wrong index")
##    except:
##        print("SET_RESOLUTION: something went wrong")
##
##def set_quality(url: str, value: int=1, verbose: bool=False):
##    try:
##        if value >= 10 and value <=63:
##            requests.get(url + "/control?var=quality&val={}".format(value))
##    except:
##        print("SET_QUALITY: something went wrong")
##
##def set_awb(url: str, awb: int=1):
##    try:
##        awb = not awb
##        requests.get(url + "/control?var=awb&val={}".format(1 if awb else 0))
##    except:
##        print("SET_QUALITY: something went wrong")
##    return awb
##
##
##set_resolution(URL, index=8)
##
##while True:
##    if cap.isOpened():
##
##        if ret:
##            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
##            gray = cv2.equalizeHist(gray)
##
##            pil_img = Image.fromarray(gray)
##            text = pytesseract.image_to_string(pil_img)
##
##            print (text)
##
##        cv2.imshow("frame", frame)
##
##        key = cv2.waitKey(1)
##
##        if key == ord('r'):
##            idx = int(input("Select resolution index: "))
##            set_resolution(URL, index=idx, verbose=True)
##
##        elif key == ord('q'):
##            val = int(input("Set quality (10 - 63): "))
##            set_quality(URL, value=val)
##
##        elif key == ord('a'):
##            AWB = set_awb(URL, AWB)
##
##        elif key == 27:
##            break
##
##cv2.destroyAllWindows()
##cap.release()
import cv2
import pytesseract
from PIL import Image
import numpy as np
import requests

# ESP32 URL
URL = 'http://192.168.199.24'
AWB = True

# Connect to the ESP32-CAM video stream
cap = cv2.VideoCapture(URL + ":81/stream")

print("in")

def set_resolution(url: str, index: int = 1, verbose: bool = False):
    try:
        if verbose:
            resolutions = """10: UXGA(1600x1200)
9: SXGA(1280x1024)
8: XGA(1024x768)
7: SVGA(800x600)
6: VGA(640x480)
5: CIF(400x296)
4: QVGA(320x240)
3: HQVGA(240x176)
0: QQVGA(160x120)"""
            print("available resolutions\n{}".format(resolutions))

        if index in [10, 9, 8, 7, 6, 5, 4, 3, 0]:
            requests.get(url + "/control?var=framesize&val={}".format(index))
        else:
            print("Wrong index")
    except:
        print("SET_RESOLUTION: something went wrong")

def set_quality(url: str, value: int = 1, verbose: bool = False):
    try:
        if value >= 10 and value <= 63:
            requests.get(url + "/control?var=quality&val={}".format(value))
        else:
            print("Invalid quality value. Must be between 10 and 63.")
    except:
        print("SET_QUALITY: something went wrong")

def set_awb(url: str, awb: bool = True):
    try:
        awb = not awb
        requests.get(url + "/control?var=awb&val={}".format(1 if awb else 0))
    except:
        print("SET_AWB: something went wrong")
    return awb

set_resolution(URL, index=8)

while True:
    ret, frame = cap.read()  # Read the frame
    print("l")
    if ret:
        gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        gray = cv2.equalizeHist(gray)

        pil_img = Image.fromarray(gray)
        text = pytesseract.image_to_string(pil_img)

        print(text)

        cv2.imshow("frame", frame)

    key = cv2.waitKey(1)

    if key == ord('r'):
        idx = int(input("Select resolution index: "))
        set_resolution(URL, index=idx, verbose=True)

    elif key == ord('q'):
        val = int(input("Set quality (10 - 63): "))
        set_quality(URL, value=val)

    elif key == ord('a'):
        AWB = set_awb(URL, AWB)

    elif key == 27:  # ESC key
        break

cv2.destroyAllWindows()
cap.release()
