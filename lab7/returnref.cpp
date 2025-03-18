#include <iostream>
using namespace std;

char & get_val(string &str, string::size_type ix)
{
    return str[ix];
}

int main()
{
    string s("a value");
    cout << s << endl;

    get_val(s,0) = 'A';
    //由于get_val返回的是str[ix],因此相当于给str[ix]赋值A

    cout << s << endl;

    return 0;

}