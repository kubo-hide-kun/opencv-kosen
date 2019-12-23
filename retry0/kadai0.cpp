#include<opencv2\opencv.hpp>
using namespace std;
using namespace cv;

int main() {
	Mat image;
	image = imread("E:\\opencv320\\data\\mouse.jpg");
	if (image.empty()) {
		printf("failed load image");
		return -1;
	}
	imshow("Display Window", image);
	waitKey(0);
	return 0;
}