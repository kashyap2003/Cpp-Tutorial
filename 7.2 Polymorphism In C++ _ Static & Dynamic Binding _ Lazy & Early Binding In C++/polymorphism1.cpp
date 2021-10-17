// TOPIC: Polymorphism In C++!! (Very Important Feature In OOP)

// POINTS:
// There are teo types of Polymorphism
// A. Compile Time Polymorphism / Staic Binding / Early Binding
//      a. Function Overloading
//      b. Operator Overloading
// B. Runtimw Polymorphism / Dynamic Binding / Lazy Binding
//      a. Function Overriding (Using Virtual Functions)


#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;
public:
    Complex(int r=0, int i=0):real{r},img{i} {}
    Complex operator + (Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
    }
    void show() {cout << real << " + " << img << "i" << endl;}
};

int main()
{
    Complex c1(1,2), c2(2,3);
    Complex c3 = c1 + c2;
    c3.show();
}