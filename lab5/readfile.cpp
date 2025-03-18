#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string contents;
    ifstream infile;
    infile.open("example.txt");

    if(infile.is_open())
    {
        while(!infile.eof())
        {
            getline(infile,contents);
            cout << contents << endl;
        }
        infile.close();
    }

    return 0;
}