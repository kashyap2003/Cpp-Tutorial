// Bit Fields In C++

// It is used to reduce the size of "class/struct" if we can.

// POINT 1:
// Force alignment is possible using unnamed bit fields of size 0.
#include <iostream>
using namespace std;

struct Node1
{
    unsigned int a: 6;
    unsigned int b: 9;
};

// With force allignment
struct Node2
{
    unsigned int a: 6;
    unsigned int: 0;
    unsigned int b: 9;
};


int main()
{
    cout << sizeof(Node1) << endl;
    cout << sizeof(Node2) << endl;
}



















// NOTES:
// 1. Bit fields are from C language, there is no difference in C++.
// 2. It is used to reduce the size of "class/struct" if we can.
// 3. This feature is great in embedded system because there is scarcity of memory.
// 4. Structural Padding C/C++.
// 5. Only integral types: bool, char, signed char, unsigned char, char16_t, char32_t, wchar_t, short, 
//    int, long, long long, unsigned short, unsigned int, unsigned long, unsigned long long.