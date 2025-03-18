#include <iostream>
using namespace std;
int Max(int one, int two);

int main()
{
    int i_one = 3, i_two = 5;
    cout << "the max of " << i_one << " and " << i_two << " is " << Max(i_one,i_two) << endl;
    return 0;
} 

int Max(int one, int two)
{
    int biggest;
    if(one<two) biggest = two;
    else biggest = one;

    return biggest;
}