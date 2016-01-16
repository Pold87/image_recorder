// No copyright - Volker
#include <stdio.h>

// Include standard libraries
#include <iostream>
#include <string>
#include <typeinfo>
#include <fstream>
#include <chrono>

// Include OpenCV libraries

#include "opencv2/core.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/features2d.hpp"
#include "opencv2/xfeatures2d.hpp"
#include "opencv2/highgui.hpp"

using namespace std;
using namespace cv;



int main(){

  // Capture the Image from the webcam
  VideoCapture cap(0);
  
  // Get the frame
  Mat save_img;

  int pic_num = 0;
  
  while (true) {

    cap >> save_img;

    if(save_img.empty())
    {
      std::cerr << "Something is wrong with the webcam, could not get frame." <<    std::endl;
    }
    // Save the frame into a file
    imwrite(to_string(pic_num) + ".jpg", save_img); // A JPG FILE IS BEING SAVED

    waitKey(500);

  }

}
