// stock02.cpp -- augmented version
#include <iostream>
#include <cstring>
#include "my_stock02.h"
// constructors
Stock::Stock() // default constructor
{
    company = new char[20];
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const char * co, long n, double pr)
{
    company = new char[strlen(co)+1];
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; "
        << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    
    share_val = pr;
    set_tot();
}

// class destructor
Stock::~Stock() // quiet class destructor
{
    if(company!=nullptr) {
        delete[] company;
    }
}

// other methods
void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
        << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
        << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have!' "
        << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}


std::ostream & operator << (std::ostream &os, const Stock &st){
    os << st.company << " " << st.shares << " " << st.share_val << " " << st.total_val;
        return os;
};


const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;// * is used to return the reference
}
