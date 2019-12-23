#include<opencv2\opencv.hpp>
using namespace std;
using namespace cv;

int main() {
	Mat colorImage;
	colorImage = imread("E:\\opencv320\\data\\mouse.jpg");
	if (colorImage.empty()) {
		printf("failed load image");
		return -1;
	}
	
	Mat binaryImage;
	cvtColor(colorImage, binaryImage, COLOR_BGR2GRAY);
	imshow("Display Window", binaryImage);
	waitKey(0);

	Mat ResizedImage;
	resize(binaryImage, ResizedImage, Size(), 0.5, 0.5, 0);
	imshow("Display Window", ResizedImage);
	waitKey(0);
	return 0;
}