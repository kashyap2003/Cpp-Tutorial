// TOPIC: << & >> Operator Overloading in C++
// << Extraction Operator
// >> Stream Insertion

// POINTS:
// 1. When we need overload << & >>?
//    cout << (user define type) OR cin >> (user define type)
// 2. It can't be class member function (reason we will discuss), you have to make it friend function of class.

#include <iostream>
using namespace std;

class Test
{
    int x;

public:
    Test(int x=0):x{x} {}
    friend istream &operator >> (istream &input, Test &obj);
    friend ostream &operator << (ostream &output, Test &obj);
};

istream &operator >> (istream &input, Test &obj)
{
    input >> obj.x;
    return input;
}

ostream &operator << (ostream &output, Test &obj)
{
    output << obj.x << endl;
    return output;
}

int main()
{
    Test t;
    cin >> t;
    cout << t;
}