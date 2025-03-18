#include <iostream>
#include <string>

struct free_throws{
    std::string name;
    int made;
    int attempts;
    float precent;
};

free_throws & accumulate(free_throws & target, const free_throws & source);

free_throws & accumulate(free_throws & target, const free_throws & source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    
    return target;
}