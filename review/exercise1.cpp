#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char charr[40];
    char charr2[20];
    char full_charr[40];
    cout << "Enter your first name: " ;
    cin.getline(charr,20);

    cout << "Enter your last name: ";
    cin.getline(charr2,20);

    strcpy(full_charr,charr2);
    strcat(full_charr," ");
    strcat(full_charr,charr);
    cout << "Here's the information in a single string: " << full_charr << endl;

}