#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
    double real;
    double imag;

public:
    Complex() : real(1),imag(1) { }
    Complex(double re, double im){
        real = re;
        imag = im;
    }

    Complex Add(const Complex &rhs);
    void Show() const;

    ~Complex();
};

Complex::Complex(/* args */)
{
}

Complex::~Complex()
{
}
