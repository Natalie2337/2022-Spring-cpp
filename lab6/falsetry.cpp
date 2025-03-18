#include <iostream>
#define SIZE 5
using namespace std;

int * fun()
{
    static int arr[5];

    for (int i = 0; i < 5; i++){
        arr[i] = (i+1) * 10;
    }
    return arr; 
}

int main()
{
    int *ptr = fun();

    for (int i = 0; i < 5; i++){
        cout << ptr[i] << " ";
    }
    cout << endl;
    return 0;
}