// // Bit Fields In C++

// // It is used to reduce the size of "class/struct" if we can.

// // POINT 2:
// // Taking pointer to bit field members are not allowed as they may not start at a byte boundary.
// #include <iostream>
// using namespace std;

// struct Node
// {
//     unsigned int a: 5;
//     unsigned int b: 5;
//     unsigned int c;
// };

// int main()
// {
//     Node t;
//     // This will not work.
//     cout << &t.a;
//     // This will work because c is not bit field mwmber.
//     cout << &t.c;
// }




















// // NOTES:
// // 1. Bit fields are from C language, there is no difference in C++.
// // 2. It is used to reduce the size of "class/struct" if we can.
// // 3. This feature is great in embedded system because there is scarcity of memory.
// // 4. Structural Padding C/C++.
// // 5. Only integral types: bool, char, signed char, unsigned char, char16_t, char32_t, wchar_t, short, 
// //    int, long, long long, unsigned short, unsigned int, unsigned long, unsigned long long.