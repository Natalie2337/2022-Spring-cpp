#include <iostream>
#include <string>
using namespace std;
struct free_throws
{
    string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft)
{
    cout << "Name: " << ft.name << '\n';
    cout << "Made: " << ft.made << '\t';
    cout << "Attempts:" << ft.attempts << '\t';
    cout << "Percent: " << ft.percent << '\n';
}

void set_pc(free_throws & ft)
{
    if(ft.attempts !=0){
        ft.percent = 100.0f * float(ft.made)/float(ft.attempts);
    }else{
        ft.percent = 0;
    }
}

free_throws & accumulate(free_throws & target, const free_throws & source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);

    return target;
}

int main()
{
    free_throws one = {"angela", 13, 14};
    free_throws team = {"carl delany", 0, 0};

    free_throws dup;
    dup = accumulate(team, one);

    cout << "Displaying team:\n";
    display(team);
    cout << "Displaying dup after assignment:\n";
    display(dup);

    return 0;
}