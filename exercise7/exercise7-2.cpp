#include <iostream>
using namespace std;

template<typename T>
T max5(T x[5])
{
    T max = x[0];
    for (int i = 1; i < 5; i++)
    {
        if(x[i]>=max){
            T temp;
            temp = x[i];
            x[i] = max;
            max = temp;
        }
    }
    // cout << "Max " << T << "=" << max << endl; 这里T不能这样用！
    return max;    
}

int main()
{
    int ints[5] = {1, 2, 3, 4, 5};
    double dous[5] = {1.1, 2.0, 3.0, 4.0, 5.5};
    int max_int = max5(ints);
    double max_double = max5(dous);
    cout << "Max int = " << max_int << endl;
    cout << "Max double = " << max_double << endl;
}