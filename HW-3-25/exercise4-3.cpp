#include <iostream>
using namespace std;

int main()
{
    
    int *pnum = new int[5];
    int *ptr = pnum;
    cout << "Enter 5 integers: "<< endl;
    for(; ptr < pnum + 5; ptr++ )
    // for 循环的语法：(循环之前要做的事；循环条件；每次循环结束做的事)
    //在这里的意思就是，从ptr指向pnum数组的首地址起，每次向后移一位，直到最后移到数组结束
        cin >> *ptr;

    ptr = ptr-1;

    cout << "The elements of the array in reverse order are: " << endl;
    for(; ptr > pnum-1 ; ptr--)
        cout << *ptr << " " ;

    delete []pnum;
    
    return 0;
}