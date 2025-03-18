#include <iostream>
#ifndef COMPLEX_H
#define COMPLEX_H

class Number
{
private:
    int number;

public:
    Number () {}
    Number(int num): number(num) { }

    operator int() const{
        return number;
    }

    Number operator++(int n){
       Number num;
       num.number = n;
       n = n+1;
       return num;
    }

    Number operator--(int n){
        Number num;
       num.number = n;
       n = n-1;
       return num;
    }

    friend Number operator++(Number & right_n){
        right_n.number++;
        return right_n;
    }

    friend Number operator--(Number & right_n){
        right_n.number--;
        return right_n;
    }

    friend std::ostream & operator << (std::ostream & os, const Number &n){
        os << n.number;
        return os;
    }

};

#endif