// // TOPIC: Types of Thread creation in C++11.
// // There are 5 different types we can create threads in C++11 using callable oblects.

// // NOTE:
// // 1. If we create multiple threads at the same time it doesn't guarantee which one will start first.


// // 3. Functor (Function Object)

// #include <iostream>
// using namespace std;

// class Base
// {
// public:
//     void operator () (int x)
//     {
//         while (x --> 0)
//         {
//             cout << x << endl;
//         }
//     }
// };

// int main()
// {
//     std::thread t((Base()), 10);
//     t.join();
// }