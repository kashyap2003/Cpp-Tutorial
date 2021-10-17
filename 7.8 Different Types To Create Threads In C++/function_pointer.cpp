// // TOPIC: Types of Thread creation in C++11.
// // There are 5 different types we can create threads in C++11 using callable oblects.

// // NOTE:
// // 1. If we create multiple threads at the same time it doesn't guarantee which one will start first.


// // 1. Function Pointer
// // This is the very basic form of thread creation.

// #include <iostream>
// #include <thread>
// using namespace std;

// void fun(int x)
// {
//     while (x --> 0)
//     {
//         cout << x << endl;
//     }
// }

// int main()
// {
//     std::thread t1(fun, 11);
//     t1.join();
// }