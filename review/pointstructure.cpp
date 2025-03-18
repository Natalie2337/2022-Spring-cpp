#include <iostream>
using namespace std;

struct point{
    double x;
    double y;
};
point mid1(const point &, const point &);
point * mid2(const point &, const point &);
void mid3(const point &, const point &, point &);
point & mid4(const point &, const point &);

int main(){
    point p1{1,1};
    point p2{3,3};
    point pv, pr, prr;
    point *pp = NULL;
}

point & mid4(const point &p1, const point &p2){
    point p;
    p.x = (p1.x + p2.x)/2;
    p.y = (p1.y + p2.y)/2;
}