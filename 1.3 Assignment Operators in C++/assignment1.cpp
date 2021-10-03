#include <iostream>
using namespace std;

int main(void)
{
    int a=10, b=12, c=15;

    b=c=a++;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    cout << "If we do post ++ then the value of that element is only change and other element remain same";
}