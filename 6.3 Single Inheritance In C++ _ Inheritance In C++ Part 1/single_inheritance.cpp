// TOPIC: Single Inheritance In C++

// POINTS:
// 1. This is the most basic type of inheritance.
// 2. It request only one base class and one derived class.

#include <iostream>
using namespace std;

class Vehical
{
public:
    void DrivingVehical()
    {
        cout << "Driving Vehical" << endl;
    }

};

class Car: public Vehical
{
public:
    void getVehicals()
    {
        cout << "4 Vehicals" << endl;
    }
};

int main()
{
    Car c;
    c.DrivingVehical();
    c.getVehicals();

}