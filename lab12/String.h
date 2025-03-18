#include <iostream>
#ifndef __MYSTRING__
#define __MYSTRING__

class String
{
private:
    char * m_data;

public:
    String(const char * cstr = 0);
    ~String();
    String(const String& str);
    String & operator=(const String& str);
};

#endif