#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int main()
{
	//Blank Image
	Mat canvas = Mat::zeros(Size(512, 512), CV_8UC3);

	Point p1(100, 100);
 	Point p2(300, 150);
 	Point p3(300, 350);
 	Point p4(250, 450);
 	Point p5(50, 450);
 	std::vector<Point> pts;
	pts.push_back(p1);
	pts.push_back(p2);
	pts.push_back(p3);
	pts.push_back(p3);
	pts.push_back(p4);
	pts.push_back(p5);
	polylines(canvas, pts, true, Scalar(0, 255, 0), 1, 8, 0);
	//cv::circle(canvas,p1,80,Scalar(0, 69, 255));

	imshow("Image", canvas);
	waitKey(0);	

	return 0;
}
