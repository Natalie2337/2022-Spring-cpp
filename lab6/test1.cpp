#include <iostream>
#define SIZE 5
using namespace std;

int sumAllElements(int *pa, int n);

int main()
{
    int arr[SIZE] = {10,20,30,40,50};
    int total = sumAllElements(arr,SIZE);
    cout << "the sum of all elements:  " << total << endl;
    return 0;
}

int sumAllElements(int *pa,int n)
{
    int total =0;
    for (int i = 0; i < n; i++)
    {
        total += *pa;
        //利用*取内容操作，*pa实际等于arr[i]
        pa++;
        //指针右移
    }

    return total;
    
}