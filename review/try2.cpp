#include <iostream>
int main()
{
    using namespace std;
    cout << "what year was your house built? ";
    int year;
    cin >> year;
    cin.get();  
    cout << "what is its street address? ";
    char address[80];
    cin.getline(address,80);
    cout << "year built: " << year << endl;
    cout << "address: " << address << endl;

    return 0;
}