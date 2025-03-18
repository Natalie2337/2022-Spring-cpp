#include <iostream>
using namespace std;

template<typename T>
T sum(T x, T y)
{
    return x+y;
}

struct Point
{
    int x;
    int y;
};

template<>
Point sum<Point>(Point pt1, Point pt2)
{
    Point pt;
    pt.x = pt1.x + pt2.x;
    pt.y = pt1.y + pt2.y;
    return pt;
}

int main()
{
    cout << "sum = " << sum(1,2) << endl;
    cout << "sum = " << sum(1.1, 2.2) << endl;

    Point pt1 {1,2};
    Point pt2 {2,3};

    Point pt = sum(pt1, pt2);

    cout << "pt = " << "( " << pt.x << "," << pt.y << " )" << endl;
    return 0;


}
