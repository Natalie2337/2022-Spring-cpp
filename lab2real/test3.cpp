#include <iostream>
#include <climits>

int main()
{
    using namespace std;

    //macros:
    int max_int = INT_MAX;
    int max_short = SHRT_MAX;
    long max_long = LONG_MAX;
    long long max_llong = LLONG_MAX;

    cout << "Maximum Values" << endl;

    cout << "int:" << max_int << endl << "short:" << max_short << endl <<" long:" << max_long << endl <<"long long:" << max_llong << endl;
}