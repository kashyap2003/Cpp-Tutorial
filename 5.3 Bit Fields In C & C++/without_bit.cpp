// Bit Fields In C++

// It is used to reduce the size of "class/struct" if we can.

#include <iostream>
using namespace std;

struct Date
{
    unsigned int d;
    unsigned int m;
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