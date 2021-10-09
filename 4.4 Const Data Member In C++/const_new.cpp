// const data member of class in C++

// They are condtant so can not be changed once initialized.

// 1st Way: Initialize in class.
// 2nd Way: Initialize list is used to initialize them from outside.

#include <iostream>
using namespace std;

class Phone
{
    const string pname;
public:
    Phone(string s):pname{s} {}

    string getPhone() {return pname;} // We are using this to returning pname value and so the value is string that's why we put string in start.
    // If vslue is int then we will have to put int in start.
};

int main(void)
{
    Phone p1("Samsung J6"), p2("Iphone X");
    
    cout << p1.getPhone() << endl;
    cout << p2.getPhone() << endl;
}