#include <iostream>
#define SIZE 5
using namespace std;

void sum(int *, int *, int);
int main()
{
    int a[SIZE] = {10,20,30,40,50};
    int b[SIZE] = {1,2,3,4,5};

    cout << "before calling the functions, the contents of a are: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << " ";
    }

    sum(a,b,SIZE);

    cout << "After calling the function, the contents of a are: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << a[i] << " ";
    }

    return 0;    
}

void sum(int *pa, int*pb, int n)
{
    for (int i = 0; i < n; i++)
    {
        *pa += *pb;
        //相当于a[i]+b[i]
        pa++;
        pb++;
    }
    
}
