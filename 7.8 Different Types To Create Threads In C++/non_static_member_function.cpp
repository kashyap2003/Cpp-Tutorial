// // TOPIC: Types of Thread creation in C++11.
// // There are 5 different types we can create threads in C++11 using callable oblects.

// // NOTE:
// // 1. If we create multiple threads at the same time it doesn't guarantee which one will start first.


// // 4. Non-Static Member Function.

// #include <iostream>
// using namespace std;

// class Base
// {
// public:
//     void run(int x)
//     {
//         while (x --> 0)
//         {
//             cout << x << endl;
//         }
//     }
// };

// int main()
// {
//     Base b;
//     std::thread t(&Base::run, &b, 10);
//     t.join();
// }