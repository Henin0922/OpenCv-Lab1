#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
	//��ȡͼ��
	Mat srcImage = cv::imread("C:\\Users\\zhx_8\\Pictures\\opencv\\dog.jpg");
	Mat grayImage, bgrImage, hsvImage, bgrImage2;

	//��BGRת��ΪGRAY����ת����
	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
	cvtColor(grayImage, bgrImage, COLOR_GRAY2BGR);
	imshow("GRAY img", grayImage);
	imshow("BGR img", bgrImage);

	//��BGRת��ΪHSV����ת����BGR
	cvtColor(srcImage, hsvImage, cv::COLOR_BGR2HSV);
	cvtColor(hsvImage, bgrImage2, cv::COLOR_HSV2BGR);
	imshow("HSV img", hsvImage);
	imshow("BGR img2", bgrImage2);

	//����ͼ��
	imwrite("C:\\Users\zhx_8\\Pictures\\opencv\\bgr_gray_dog.jpg", grayImage);
	imwrite("C:\\Users\zhx_8\\Pictures\\opencv\\gray_bgr_dog.jpg", bgrImage);
	imwrite("C:\\Users\zhx_8\\Pictures\\opencv\\bgr_hsv_dog.jpg", hsvImage);
	imwrite("C:\\Users\zhx_8\\Pictures\\opencv\\hsv_bgr_dog.jpg", bgrImage2);

	waitKey(0);
	return 0;
}