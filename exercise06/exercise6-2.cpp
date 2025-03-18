#include <iostream>
#include <string.h>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void print_byvalue (box record);
void print_bypointer(box *record);

int main()
{
    box record;
    cout << "input box maker: ";
    cin.get(record.maker,40);
    cout << "input box height: ";
    cin >> record.height;
    cout << "input box width: ";
    cin >> record.width;
    cout << "input box length: ";
    cin >> record.length;

    record.volume = record.height * record.width * record.length;

    cout << "Before setting volume: "<< endl;
    print_byvalue(record);

    cout << "After setting volume: " << endl;
    print_bypointer( &record);

    return 0;
}

void print_byvalue(box a)
{
    cout << "Maker: " << a.maker << endl;
    cout << "Height: " << a.height << endl;
    cout << "Width: " << a.width << endl;
    cout << "Length: " << a.length << endl;
    cout << "Volume: " << "0" << endl;
}

void print_bypointer(box *a)
{
    
    cout << "Maker: " << a->maker << endl;
    cout << "Height: " << a->height << endl;
    cout << "Width: " << a->width << endl;
    cout << "Length: " << a->length << endl;

    cout << "Volume: " << a->volume << endl;

}
