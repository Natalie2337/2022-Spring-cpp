#include <iostream>
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
    double real;
    double imag;

public:
    Complex() {}
    Complex(double re, double im){
        real = re;
        imag = im;
    }
    
    Complex operator+(const Complex &rhs) const{
        Complex result;
        result.real = real + rhs.real;
        result.imag = imag + rhs.imag;
        return result;
    };

    Complex operator-(const Complex &rhs) const{
        Complex result;
        result.real = real - rhs.real;
        result.imag = imag - rhs.imag;
        return result;
    };

    Complex operator*(const Complex &rhs) const{
        Complex result;
        result.real = real * rhs.real - imag * rhs.imag;
        result.imag = imag * rhs.real + real * rhs.imag;
        return result;
    };

    friend Complex operator*(double n, Complex &rhs){
        Complex result;
        result.real = n * rhs.real;
        result.imag = n * rhs.imag;
        return result;
    }

    Complex operator-(int n) const{
        Complex result;
        result.real = real - n;
        result.imag = imag;
        return result;
    };

    Complex operator ~() const{
        Complex result;
        result.real = real;
        result.imag = -imag;
        return result;
    }

    
    bool operator==(Complex &rhs) const{
        bool judge = false;
        if(real == rhs.real && imag == rhs.imag){
            judge = true;
        }

        return judge;
    };

    bool operator!= (Complex &rhs) const{
        bool judge = true;
        if((real != rhs.real)||(imag != rhs.imag)){
            judge = false;
        }
        return judge;
    };

    friend std::ostream & operator << (std::ostream &os, const Complex &c){
        os << c.real << (c.imag >= 0? "+":"") << c.imag << "i";
        return os;
    };

    friend std::istream & operator >> (std::istream & sin, Complex &c){
        sin >> c.real >> c.imag;
        return sin;
    };

    
};


#endif