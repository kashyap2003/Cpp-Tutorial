// // TOPIC: Types of Thread creation in C++11.
// // There are 5 different types we can create threads in C++11 using callable oblects.

// // NOTE:
// // 1. If we create multiple threads at the same time it doesn't guarantee which one will start first.


// // 2. Lambda Function
// // Example:

// #include <iostream>
// using namespace std;

// int main()
// {
//     // We can directly inject lambda at thread creation time.
//     auto fun = [] (int x)
//     {
//         while (x --> 0)
//         {
//             cout << x << endl;
//         }
//     };

//     std::thread t(fun, 10);
//     t.join();
// }