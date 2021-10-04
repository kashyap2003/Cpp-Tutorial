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
    Base o;
    cout << sizeof(o) << endl;

    cout << "It also give the same value Because we just replace Base to o";
}