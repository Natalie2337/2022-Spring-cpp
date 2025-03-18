#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

bool splitline_check(string str){
    int count = 0;
    string token1;
    string token2;
    string token3;
    istringstream iss(str);

    getline(iss,token1,',');
    getline(iss,token2,',');
    getline(iss,token3,',');

    if(token3=="China") return true;
    else return false;

}

int main()
{   
    //ios::out：如果没有文件，那么生成空文件；如果有文件，清空文件

        
    ifstream infile;
    infile.open("world_cities.csv");
    
    ofstream myfile("china_cities.csv", ios::out);

    if(infile.is_open())
    {
        while(!infile.eof())
        {
            string contents;
            getline(infile,contents);
            if(contents.find("China", 0)!=string::npos)
            {
                if(splitline_check(contents)==true) myfile << contents << endl;                
            }
        }

        myfile.close();
        infile.close();
        
    }

    return 0;
}