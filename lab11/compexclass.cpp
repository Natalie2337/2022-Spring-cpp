#include <iostream>
#include "complex.h"

Complex Complex::operator+(const Complex& rhs)
{
    this->real += rhs.real;
    this->imag += rhs.imag;

    return *this;
}

void Complex::Show() const
{
    std::cout << real << (imag >= 0? "+" : " ") << imag << "i" ;
}