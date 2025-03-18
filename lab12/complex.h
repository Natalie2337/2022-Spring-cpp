#include <iostream>
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(): real(1),imag(1) { }
    Complex(double re, double im)
    {
        real = re;
        imag = im;
    }

    Complex operator+(const Complex &rhs);
    void Show() const;

    friend std::ostream & operator << (std::ostream &os, const Complex &c){
        os << c.real << (c.imag >= 0? "+":"") << c.imag << "i";
        return os;
    };

    friend std::istream & operator >> (std::istream & sin, Complex &c){
        sin >> c.real >> c.imag;
        return sin;
    };

    Complex(const Complex& c){
        real = c.real;
        imag = c.imag;
        std::cout << "Copy constructor called. " << std::endl;
    }
};

#endif