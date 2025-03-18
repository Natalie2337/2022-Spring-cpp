#include <iostream>
using namespace std;

struct Person 
{
    char name[20];
    int age;
    float salary;
};

int main()
{
    Person person;

    cout << "enter full name ";
    cin.get(person.name,20);
    cout << "enter age ";
    cin >> person.age;
    cout << "enter salary ";
    cin >> person.salary;

    cout << "\n Displaying Information of person: " <<endl;
    cout << "name: " << person.name << endl;
    cout << "age: " << person.age << endl;
    cout << "salary: " << person.salary << endl;

    return 0;

}