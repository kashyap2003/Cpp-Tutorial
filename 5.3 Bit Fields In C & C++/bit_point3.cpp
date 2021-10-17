// // Bit Fields In C++

// // It is used to reduce the size of "class/struct" if we can.

// // POINT 3:
// // Assigning an out-of-range value to a bit field member is implementtation defined .......
// #include <iostream>
// using namespace std;

// struct Node
// {
//     unsigned int a: 2:
//     unsigned int b: 2;
//     unsigned int c: 2;
// };

// int main()
// {
//     Node n;
//     n.a = 5;
//     cout << n.a << endl;
// }













// // NOTES:
// // 1. Bit fields are from C language, there is no difference in C++.
// // 2. It is used to reduce the size of "class/struct" if we can.
// // 3. This feature is great in embedded system because there is scarcity of memory.
// // 4. Structural Padding C/C++.
// // 5. Only integral types: bool, char, signed char, unsigned char, char16_t, char32_t, wchar_t, short, 
// //    int, long, long long, unsigned short, unsigned int, unsigned long, unsigned long long.