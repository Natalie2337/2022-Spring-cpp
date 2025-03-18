#include <iostream>
using namespace std;


int main()
{
    string first_name;
    string last_name;
    char grade;
    int age;
    
    char str[100];
    //??question: why we input a string but the array is char
    //??how to assign string value to a variable
    cout << "What is your first name?" ;
    cin.getline(str,20) >> first_name;
    cout << " What is your last name?" ;
    cin.getline(str,20) >>  last_name;
    cout << "\n What letter grade do you deserve?" ;
    cin.getline(str,20) >> grade;
    cin.get();
    cout << "\n What is your age?" ;
    cin >> age;

    cout << "The information you entered is: " << endl;
    cout << "Name: " << first_name << "," << last_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;



}