#include <iostream>
using namespace std;

void change(int *new_a, int new_b)
{
    *new_a = 20;
    new_b = 200;
}

int main(void)
{
    int a = 10, b=100;

    change(&a,b);

    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << "See what happends if we don't use the pointer in it. It will not change the value of B.";
}

// In this code we are giving address of a to change and change have a pointer(*) so it will reference the address of a and after that *new_a just dereference the address of a and put the value of 20 in a's address. 