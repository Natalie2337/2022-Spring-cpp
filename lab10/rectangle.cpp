#include <iostream>
using namespace std;

class Rectangle 
{
public:
    double width;
    double height;

    double getArea(){
        return width*height;
    }
};

int main()
{
    Rectangle rectangle;
    rectangle.width = 1;
    rectangle.height = 2;

    cout << "the width = " << rectangle.width ;
    cout << "the height = " << rectangle.height ;
    cout << "the area = " << rectangle.getArea();

    return 0;
}