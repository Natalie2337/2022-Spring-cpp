#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("example.txt");

    if(myfile.is_open())
    {
        cout << "open the file for writing a string \n";
        myfile << "rewrite this file\n";
        myfile << "you are a crocodile!!";

        myfile.close();
    }

    return 0;
}