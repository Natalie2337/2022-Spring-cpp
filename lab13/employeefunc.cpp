#include "employee.h"
#include <iostream>
#include <cstring>

Employee::Employee(const char* n, const char *s){
    name = new char[strlen(n)+1];
    strcpy(name,n);
    strcpy(ssn,s);

}// base class constructor

Employee::Employee(const Employee& e)
{
    name = new char[strlen(e.name)+1];
    strcpy(name,e.name);
    strcpy(ssn,e.ssn);
}//base class copy constructor


Employee& Employee::operator=(const Employee &e)
{
    if(this==&e) return *this;

    delete[] name;
    name = new char[strlen(e.name)+1];
    strcpy(name,e.name);
    strcpy(ssn,e.ssn);
    return *this;
}

Employee::~Employee()
{
    delete[] name;
} 

void Employee::show()
{
    std::cout << "name is: " << name << ",ssn number is:" << ssn << std::endl;
}