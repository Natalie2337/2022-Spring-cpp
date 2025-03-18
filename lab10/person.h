#include <iostream>

#ifndef PERSON_H
#define PERSON_h

class Person
{
private:
    const int SIZE = 10;
    int age = 20;

public:
//注意define constructor的时候，最后面没有分号
    Person(){}
    Person(int a) {age = a;}

    void Show()
    {
        std::cout << "the size is: " << SIZE << ",the age is: " << age << std::endl;
    }
};




#endif
