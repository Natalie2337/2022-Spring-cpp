#include <iostream>
#ifndef __MYEMPLOYEE__
#define __MYEMPLOYEE__

class Employee
{
protected:
    char * name;
    char ssn[20];

public:
    Employee(const char * n, const char * s);
    Employee(const Employee & e);
    virtual ~Employee();

    Employee & operator=(const Employee &e);

    void show();
};

class SalariedEmployee : public Employee
{
private:
    double salary;

public:
    SalariedEmployee(const char * name, const char * ssn, double s) : Employee(name,ssn),salary(s)
    {
        std::cout << "the derived class constructor is invoked." <<std::endl;
    }

    virtual ~SalariedEmployee()
    {
        std::cout << "the derived class destructor is invoked." << std::endl;
    }

    SalariedEmployee(const Employee & e, double s) : Employee(e),salary(s){}
    double getSalary() const {return salary;}
    void setSalary(double s) {salary = s;}
    double earning() {getSalary();}

    void show()
    {
        std:: cout<< "name is: " << name << ",SSN number is: " << ssn << ",Salary is:" << salary << std::endl;
    }
};

#endif