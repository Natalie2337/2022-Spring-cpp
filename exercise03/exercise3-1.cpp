#include <iostream>
using namespace std;

struct Student
{
    char firstname [20];
    string lastname;
    char grade;
    int age;
};

int main()
{
    Student std;
    cout << "What is your first name? " ;
    cin.get(std.firstname,20);
    cout << "What is your last name? ";
    cin >> std.lastname;
    cout << "What letter grade do you deserve? ";
    cin >> std.grade;
    cout << "What is your age? ";
    cin >> std.age;


    cout << "The information you entered is: " << endl;
    cout << "Name: " << std.firstname << ", " << std.lastname << endl;
    cout << "Grade: " << std.grade << endl;
    cout << "Age: " << std.age << endl;

    return 0;

}