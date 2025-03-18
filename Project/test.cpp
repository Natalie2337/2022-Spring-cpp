#include <opencv2/opencv.hpp>
#include <iostream>


int main()
{
     cv::Mat img = cv::imread("./test.jpg");
     cv::imshow("gril",img);
    
    std::cout << "hello" ;
    cv::waitKey();
    return 0;
}