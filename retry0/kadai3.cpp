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

	Mat AffinedImage;
	Point2d ctr(binaryImage.cols / 2, binaryImage.rows / 2);
	Mat mat = getRotationMatrix2D(ctr, 45, 1);
	warpAffine(binaryImage, AffinedImage, mat, AffinedImage.size(), CV_INTER_LINEAR, cv::BORDER_TRANSPARENT);
	imshow("Display Window", AffinedImage);
	waitKey(0);
	return 0;
}