#include "my_stack.h"
#include <iostream>


Stack::Stack(int n){
    pitems = new Item[n];
    size = n;
    top = 0;
}

Stack::Stack(const Stack & st){
    // copy constructor
    size = st.size;
    top = st.top;
    pitems = new Item[st.size];
    for (int i = 0; i < top; i++)
    {
        pitems[i] = st.pitems[i];
    }
    
    std::cout << "this is a copy constructor" << std::endl;
}

Stack::~Stack(){
    if(pitems!=nullptr){
        delete[] pitems;
    }        
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        pitems[top+1] = item;    
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        // pop top into item
        item = pitems[top-1];
        return true;
    }
    else
        return false;
}

Stack & Stack::operator=(const Stack & st)
{
    //copy assignment operator
    if(this == &st) return *this;
    delete[] pitems;

    pitems = new Item[st.size+1];
    for (int i = 0; i < size; i++)
    {
        pitems[i] = st.pitems[i];
    }
    size = st.size;
    top = st.top;
    return * this;
}