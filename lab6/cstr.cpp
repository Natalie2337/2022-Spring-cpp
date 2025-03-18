#include <iostream>
#include <cstring>
using namespace std;

void mycopy(char *s, int m);

int main()
{
    char str[81];
    int m;
    cout << "enter a string :\n" ;
    cin.getline(str,81);

    cout << "enter the starting number you want to copy : ";
    //原来有疑问，为什么是starting number 而不是ending number，实际上是指针的移动导致了开始复制的位置变化
    cin >> m;

    mycopy(str,m);

    cout <<"the copied string is: \n" << str << endl;

    return 0;
}

void mycopy(char *s, int m)
{
    strcpy(s, s+m-1);
}