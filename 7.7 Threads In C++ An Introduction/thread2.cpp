// // TOPIC: Introduction to thread In C++ (C++11)

// // QUESTION:
// // 1. What do you understand by thread and give one example in C++?

// // ANSWER:
// // 0. In every application there is a default thread which is main(), in side we create other threads.
// // 1. A Thread is also know as lightweight process. Idea is achieve parallelism by dividing a process into multiple threads.
// //    For example:
// //    (a) The browser has multiple tabs that can be different threads.
// //    (b) MS Word must be using multiple threads, one thread to formate the text, another thread to process input (spell checker)
// //    (c) Visual Studio Code editor would be using threading for autocompeting the code. (Intellicence)

// // WAYS TO CREATE THREADS IN C++11
// // 1. Functiom Pointers
// // 2. Lambda Functions
// // 3. Functors
// // 4. Member Functions
// // 5. Static Member Functions

// // REQUIREMENTS:
// // Find the addition of all odd number fron 1 to 190000000 and all even number from 1 to 190000000

// #include <iostream>
// #include <thread>
// #include <chrono>
// #include <algorithm>
// using namespace std;
// using namespace std::chrono;
// typedef unsigned long long ull; // It just replace the input long long to ull

// ull OddSum = 0;
// ull EvenSum = 0;

// void findEven(ull start, ull end)
// {
//     for (ull i = start; i<=end; ++i)
//     {
//         if ((i &1) == 0)
//         {
//             EvenSum =+ i;
//         }
//     }
// }

// void findOdd(ull start, ull end)
// {
//     for (ull i = start; i<=end; ++i)
//     {
//         if ((i &1) == 1)
//         {
//             OddSum =+ i;
//         }
//     }
// }

// int main()
// {
//     ull start = 0, end = 190000000;

//     auto startTime = high_resolution_clock::now();

//     std::thread t1(findEven, start, end);
//     std::thread t2(findOdd, start, end);

//     t1.join();
//     t2.join();

//     // findOdd(start, end);
//     // findEven(start, end);

//     auto stopTime = high_resolution_clock::now();
//     auto duration = duration_cast<microseconds>(stopTime - startTime);

//     cout << "OddSum: " << OddSum << endl;
//     cout << "EvenSum: " << EvenSum << endl;

//     cout << "Sec:" << duration.count()/1000000 << endl;
// }