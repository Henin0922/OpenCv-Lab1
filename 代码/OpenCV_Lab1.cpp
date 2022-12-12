#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
	//读取图像
	Mat srcImage = cv::imread("C:\\Users\\zhx_8\\Pictures\\opencv\\dog.jpg");
	Mat grayImage, bgrImage, hsvImage, bgrImage2;

	//将BGR转换为GRAY，再转换回
	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
	cvtColor(grayImage, bgrImage, COLOR_GRAY2BGR);
	imshow("GRAY img", grayImage);
	imshow("BGR img", bgrImage);

	//将BGR转换为HSV，再转换回BGR
	cvtColor(srcImage, hsvImage, cv::COLOR_BGR2HSV);
	cvtColor(hsvImage, bgrImage2, cv::COLOR_HSV2BGR);
	imshow("HSV img", hsvImage);
	imshow("BGR img2", bgrImage2);

	//储存图像
	imwrite("C:\\Users\zhx_8\\Pictures\\opencv\\bgr_gray_dog.jpg", grayImage);
	imwrite("C:\\Users\zhx_8\\Pictures\\opencv\\gray_bgr_dog.jpg", bgrImage);
	imwrite("C:\\Users\zhx_8\\Pictures\\opencv\\bgr_hsv_dog.jpg", hsvImage);
	imwrite("C:\\Users\zhx_8\\Pictures\\opencv\\hsv_bgr_dog.jpg", bgrImage2);

	waitKey(0);
	return 0;
}