#include <iostream>
#include "person.h"

int main()
{
    using std::cout;
    using std::endl;

    Person person1 = {"Alice Green",34,2902.5};
    Person person2;

    cout << "the size of person is: " << sizeof(Person) << endl;
    cout << "the size of person1 is " << sizeof(person1) << endl;
    person2=person1;

    cout << "person2's name is " << person2.name <<endl;
    cout << "person2's age is " << person2.age << endl;
    cout << "person2's salary is " << person2.salary << endl;

    return 0;

}