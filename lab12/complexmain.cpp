#include <iostream>
#include "complex.h"

int main()
{
    Complex c1(1,2);
    Complex c2(c1); // copy constructor called
    Complex c3 = c1; // copy constructor called

    std::cout << "c1 = " << c1 << std::endl;
    std::cout << "c2 = " << c2 << std::endl;
    std::cout << "c3 = " << c3 << std::endl;

    return 0;
}