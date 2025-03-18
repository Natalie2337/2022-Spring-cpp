#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    
    char input[80];
    string readline;
    
    fstream filetry("f1.txt",ios::out | ios::in);
    fstream filetry2("f2.txt",ios::out | ios::in);

    if(filetry.good() && filetry2.good())
    {
        cout << "Please input a string:";
        cin.getline(input,80);
       
        
        int len = strlen(input);

        for (int i = 0; i < len; i++)
        {
            if((!isdigit(input[i]))&&(!ispunct(input[i])))
            {
                filetry << input[i];
            }else{
                continue;
            }    
        }


        
        for (int i = 0; i < len; i++)
        {
            if((!isdigit(input[i]))&&(!ispunct(input[i])))
            {
                if(islower(input[i])){
                    input[i]= toupper(input[i]);
                    filetry2 << input[i];
                }else{
                    filetry2 << input[i];
                }

            }else{
                continue;
            }    
        }
        
        filetry.clear();
        filetry.seekg(0);
        filetry2.clear();
        filetry2.seekg(0);




        cout << "The contents of f1.txt :" << endl;
        while(!filetry.eof())
        {
            getline(filetry,readline);
            cout << readline << endl;
        }

        filetry.close();


        cout << "The contents of f2.txt :" << endl;
        while(!filetry2.eof())
        {
            getline(filetry2,readline);
            cout << readline << endl;
        }

        filetry2.close();



    }
    else{
        cout << "files could not be opened.\n";}

    filetry.clear();
    filetry2.clear();


    return 0;
    
}
