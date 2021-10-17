// TOPUC: Template Specilization In C++

// POINTS:
// 1. Some time we have to specialize template for a perticular data type.
// 2. We can specialize both "function" and "class" template.

// REQUIREMENT:
// Add all the elements in vector


#include <iostream>
#include <vector>
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

int main()
{
    vector<int> VecInt = {4,3,2,6,5,1}; 
    std::vector<double> VecDouble = {4.0,3.0,2.0,6.0,5.0,1.0};
    cout << addALL(VecInt) << endl;
    cout << addALL(VecDouble) << endl;
}
