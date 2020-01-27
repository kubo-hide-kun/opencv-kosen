#include<opencv2\opencv.hpp>
using namespace std;
using namespace cv;

int main1() {
	Mat colorImage;
	colorImage = imread("E:\\opencv320\\data\\mouse.jpg");
	if (colorImage.empty()) {
		printf("failed load image");
		return -1;
	}
	imshow("Display Window", colorImage);
	waitKey(0);
	Mat binaryImage;
	cvtColor(colorImage, binaryImage, COLOR_BGR2GRAY);
	imshow("Display Window", binaryImage);
	waitKey(0);
	return 0;
}
