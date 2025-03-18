#include <iostream>
#include <iomanip>

#define SIZE 2
const int arrsize =3;
//using namespace std;

int main()
{
    using std::cout;
    using std::endl;
    int a[SIZE]={0};
    double b[arrsize] = {1};
    

    cout<< "the elements in a are "<< a[0] <<a[1] << endl;
    cout<< "the elements in b are "<< b[0] <<b[1] <<b[2] << endl;

    return 0;

}