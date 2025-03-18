#include <iostream>
#define SIZE 5
using namespace std;

int sumAllElements(int a[], int n);

int main()
{
    int arr[SIZE] = {10,20,30,40,50};
    int total = sumAllElements(arr, SIZE);
    //这里直接使用数组名字就好了
    cout << "The sum of all elements is: " << total << endl;
    return 0;
}

int sumAllElements(int a[],int n)
{
    int total=0;
    for (int i = 0; i < n; i++)
    {
        total += a[i];
    }

    return total;
    
}