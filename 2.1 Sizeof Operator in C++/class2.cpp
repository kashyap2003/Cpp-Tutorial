#include <iostream>
using namespace std;

// BASIC DATA

/*
int ---> 4 bytes
char ---> 1 byte
float ---> 4 bytes
double ---> 8 bytes

1 bit = 8 bites
4 bits = 32 bites
*/

class Base 
{
    int x;
    int y;
    char c;
};

int main()
{
    cout << sizeof(Base) << endl;

    cout << "For char it also giving 4 bytes ans because of structural padding.\nNOTE: Structural Padding means it will only take the value which is multiple of 4.\nSee the result sholud want to come as 9 Beacuse 4 for int, 4 for float and 1 for char\nSo, Because of struct padding it is showing 12.";


}