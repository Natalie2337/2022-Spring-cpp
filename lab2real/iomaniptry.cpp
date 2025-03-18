#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout << 56.8 << setw(12) << 456.77 << endl;

    return 0;
}

