// const data member of class in C++

// They are condtant so can not be changed once initialized.

// 1st Way: Initialize in class.
// 2nd Way: Initialize list is used to initialize them from outside.

#include <iostream>
using namespace std;

class Phone
{
    const string pname;
    int RAM;
public:
    Phone(string s, int a):pname{s}, RAM{a} {}

    int getPhone() {return RAM;} // We are using this to returning RAM value and so the value is int that's why we put int in start.
    // If vsalue is string then we will have to put string in start.
};

int main(void)
{
    Phone p1("Samsung J6", 3), p2("Iphone X",32);
    
    cout << p1.getPhone() << endl;
    cout << p2.getPhone() << endl;
}