#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout<< fixed << 45.2 << endl;
    cout.unsetf(ios_base::fixed);
    cout<< 56.8 <<setw(12) << 456.77 <<endl;

    cout << setprecision(2) << endl;
    cout << setprecision(5) << endl;

    return 0;
}