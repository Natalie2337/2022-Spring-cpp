#ifndef SHAPE_SHAPE_H
#define SHAPE_SHAPE_H
#include <iostream>
using namespace std;

struct Formatting{
    ios_base::fmtflags flag;
    streamsize pr;
};

class Shape{
private:
    static int numberOfObjects;

protected:
    Formatting SetFormat() const;
    void Restore(Formatting& f) const;

public:
    Shape() {numberOfObjects++;}
    static int GetNumOfObj(){return numberOfObjects;}
    virtual void Show() {}
};

#endif