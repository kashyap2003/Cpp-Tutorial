// TOPUC: Template Specilization In C++

// POINTS:
// 1. Some time we have to specialize template for a perticular data type.
// 2. We can specialize both "function" and "class" template.

// REQUIREMENT:
// Add all the elements in vector


#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

template <typename T>
T addALL(std::vector<T> list)
{
    T count = 0;
    for(auto &elem: list)
    {
        count += elem;
    }
    return count;
}

template <>
string addALL(vector<string> list)
{
    int count = 0;
    for(const string &elem: list)
    {
        for (const char &chr: elem)
        count += chr;
    }
    ostringstream Ostr;
    Ostr << count;
    string strCount = Ostr.str();
    return strCount;
}

int main()
{
    vector<int> VecInt = {4,3,2,6,5,1}; 
    std::vector<double> VecDouble = {4.0,3.0,2.0,6.0,5.0,1.0};
    vector<string> VecString = {"abc", "bcd", "cde"};
    cout << addALL(VecInt) << endl;
    cout << addALL(VecDouble) << endl;
    cout << addALL(VecString) << endl; // It is giving the addition of it's aschii value.
}
