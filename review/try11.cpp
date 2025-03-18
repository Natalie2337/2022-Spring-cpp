#include <iostream>
using namespace std;

template<typename T>
T sum(T x,T y){
    return x + y;
}

struct Point{
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


int main(){
    Point pt1,pt2;
    cout << "sum = " << sum(1,2) <<endl;
    Point pt = sum(pt1,pt2);
}