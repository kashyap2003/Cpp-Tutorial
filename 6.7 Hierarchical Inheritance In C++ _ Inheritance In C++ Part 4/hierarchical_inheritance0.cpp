// TOPIC: Hierarchical Inheritance In C++

// POINTS:
// 1. Multiple derived classes with same base class is called hierarchical Inheritance.

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

class Bike: public Vehical
{
public:
    void getVehicals()
    {
        cout << "2 Vehicals" << endl;
    }
};
int main()
{
    cout << "For Car: " << endl;
    Car c;
    c.DrivingVehical();
    c.getVehicals();

    cout << "***********************" << endl;

    cout << "For Bike: " << endl;
    Bike b;
    b.DrivingVehical();
    b.getVehicals();
}