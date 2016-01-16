import numpy as np
import cv2
import os
import configargparse


def main(args):
    cap = cv2.VideoCapture(1)

    pic_num = 0
    os.mkdir(args.logo)

    while(True):
        # Capture frame-by-frame
        ret, frame = cap.read()

        # Display the resulting frame
        cv2.imwrite(args.logo + '/' + str(pic_num) + '.png', frame)
        if cv2.waitKey(200) & 0xFF == ord('q'):
            break

        pic_num += 1

    # When everything done, release the capture
    cap.release()

if __name__ == "__main__":

    parser = configargparse.ArgumentParser()
    parser.add_argument("--logo")
    args = parser.parse()

    main(args)
    
