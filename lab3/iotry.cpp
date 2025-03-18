#include <iostream>
using namespace std;

int main()
{
   string str;
   cout << "please enter a string: "<< endl;
   getline(cin,str);
   cout << "the string you entered is "<< str << endl;

   cout <<"please enter another string: "<< endl;
   getline(cin,str);
   cout << "the second string you entered is: "<< str <<endl;

   return 0;

}