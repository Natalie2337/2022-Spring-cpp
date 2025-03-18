#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_name, second_name,full_name;
    cout << "Enter your first name: " ;
    getline(cin,first_name);
    cout << "Enter your last name: ";
    getline(cin,second_name);
    
    full_name = first_name + " " + second_name;
    cout << "Here's the information in a single string: " << full_name << endl;

}