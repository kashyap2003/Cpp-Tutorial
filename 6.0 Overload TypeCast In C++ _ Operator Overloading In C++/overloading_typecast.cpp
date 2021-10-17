// TOPIC: Overloading Type Cast In C++

// POINTS:
// 1. There is no need to typecast implicit data types (Compiler know how to do that)
// 2. User defined data types needs this overloading.

#include <iostream>
using namespace std;

double dollarToRupeeExchangeRate()
{
    return 72.91;
}

class Rupee
{
    double rupee;

public:
    Rupee(double r=0):rupee{r} {}
    void print() {cout << rupee << endl;}
};

class Dollar
{
    double dollar;

public:
    Dollar(double d=0):dollar{d} {}
    void print() {cout << dollar << endl;}
    operator Rupee ()
    {
        return Rupee(dollar*dollarToRupeeExchangeRate());
    }
};

int main()
{
    Dollar d(10);
    Rupee r;
    r = d;
    d.print();
    r.print();
}