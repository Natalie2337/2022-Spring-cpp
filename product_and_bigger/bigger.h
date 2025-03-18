#pragma once
#include <iostream>
#include <cstring>
using namespace std;


// TODO finish inline template function bigger
template <typename T>
inline T bigger(T x,T y)
{
    return (x>y ? x:y);
}

// template overloading

inline std::string bigger(std::string str1, std::string str2)
{
    int len1 = str1.length();
    int len2 = str2.length();
    return (len1>len2 ? str1:str2);
}

inline const char * bigger(const char * ch1, const char * ch2)
{
    int len1 = strlen(ch1);
    int len2 = strlen(ch2);
    return (len1>len2 ? ch1:ch2);
}
