#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <vector>

using namespace std;
using namespace cv;
Mat canvas = Mat::zeros(Size(512, 512), CV_8UC3);


void draw(std::vector<cv::Point> pts){
	polylines(canvas, pts, true, Scalar(0, 255, 0), 1, 8, 0);
	/*
	double x1,y1;
	double x2,y2;
	for(i=0;i<points.size()-1 ;i++){
		x1 = points[i].x;
		y1 = points[i].y;
		x2 = points[i+1].x;
		y2 = points[i+1].y;
		line(img, points[i], points[i+1],Scalar(0, 69, 255), 0.1);
	}
	*/
}

void draw(Point centr, double radius){
	cv::circle(canvas,centr,radius,Scalar(0, 69, 255));
}







int main()
{
	string path = "Resources/test.png";
	Mat img = imread(path);
	imshow("Image", img);
	waitKey(0); //显示图片不会一闪而过

    string path = "Resources/test_video.mp4";
	VideoCapture cap(path); //视频捕捉对象
	Mat img;
	while (true) {

		cap.read(img);

		imshow("Image", img);
		waitKey(1);
	}

	return 0;
}