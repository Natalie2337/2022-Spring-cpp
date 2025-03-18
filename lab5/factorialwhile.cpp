#include <iostream>
using namespace std;

int main()
{
    int i,n;
    long factorial =1;

    cout << "enter an integer";
    cin >> n;

    i = 1;
    while(i<=n){
        factorial = factorial*i;
        i++;
    }

    cout << "factorial of" << n << "=" << factorial << endl;
    return 0;
}