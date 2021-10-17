// Bit Fields In C++

// It is used to reduce the size of "class/struct" if we can.


#include <iostream>
using namespace std;

struct Date
{
    // : is the symbol of bit.
    unsigned int d : 5; // We are using 5 because 2^5=32 and thier are 31 max day in month or otherwise int will use 4bytes.
    unsigned int m : 4; // We are using 4 because 2^4=32 and thier are 12 max moths in year or otherwise int will use 4bytes.
    unsigned int y;
};

int main()
{
    Date d;

    d.d=23;
    d.m=03;
    d.y=2003;

    cout << d.d << "/" << d.m << "/" << d.y << endl;
    cout << sizeof(Date) << endl;
}

















// NOTES:
// 1. Bit fields are from C language, there is no difference in C++.
// 2. It is used to reduce the size of "class/struct" if we can.
// 3. This feature is great in embedded system because there is scarcity of memory.
// 4. Structural Padding C/C++.
// 5. Only integral types: bool, char, signed char, unsigned char, char16_t, char32_t, wchar_t, short, 
//    int, long, long long, unsigned short, unsigned int, unsigned long, unsigned long long.