#include <iostream>
#include <cstring>
using namespace std;


struct PC {
    int year;
    char brand[16];
    int value;
};

struct Student {
    int studentID;
    char name[16];
    PC* computer;
};

int main()
{
    int n;
    cin >> n;
    
    PC pcarray[102];
    Student stuarray[102];

    cin.get();
    for (int i = 0; i < n; i++)
    {
        cin >> (pcarray[i].year);
        cin.getline(pcarray[i].brand,16);
        cin >> (pcarray[i].value);
    }

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> (stuarray[i].studentID);

        cin.getline(stuarray[i].name,16);
        cin >> temp;
        if(temp>=0 && temp<=n){
            *(stuarray[i].computer) = pcarray[temp];
        }else{
            // don't have computers
            stuarray[i].computer = nullptr;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(stuarray[i].computer==nullptr){
            cout << stuarray[i].name ;
            cout << stuarray[i].studentID;
            cout << "\n";
        }
    }

    int max_year = 0;
    for (int i = 0; i < n; i++)
    {
        if(stuarray[i].computer!=nullptr){
            int it_year = stuarray[i].computer->year;
            if(it_year>max_year){
                max_year = it_year;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(stuarray[i].computer!=nullptr){
            if(stuarray[i].computer->year==max_year){
                //find the oldest computer!
                cout << stuarray[i].name ;
                cout << stuarray[i].studentID;
                cout << stuarray[i].computer->year;
                cout << stuarray[i].computer->brand;
                cout << stuarray[i].computer->value;
            }
        }
    }
    return 0;   
}
