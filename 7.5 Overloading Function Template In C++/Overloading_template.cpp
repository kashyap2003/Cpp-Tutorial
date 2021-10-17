#include <iostream>
using namespace std;

int const &max(int const &a, int const &b)
{
    cout << "max(int, int)" << endl;
    return a>b ? a : b;
}

template <typename T>
T const &max(T const &a, T const &b)
{
    cout << "max(T,T)" << endl;
    return a>b ? a : b;
}

template <typename T>
T const &max(T const &a, T const &b, T const &c)
{
    cout << "max(T,T,T)" << endl;
    return max(max(a,b), c); // It will go to 1st one for two times.

}


int main()
{
    // We are using ::(scope resolution operator) to specify that this is not the internal max function
    // I am going to use my own max function
    ::max(10.0, 20.0); // It will go to 2nd beacause of double
    ::max('a', 'b'); // It will go to 2nd because of char
    ::max(10, 20); // It will go to 1st because of int
    ::max<>(10, 20); // It will go to2nd beacause of the <>
    ::max<double>(10, 20); // It will go to 2nd bacause of <double>
    ::max(10, 20, 30); // It will go to 3rd bacause of the 3 input and after that it will goto the 1st, 2 times.
}