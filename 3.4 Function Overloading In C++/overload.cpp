// RULES WHERE FUNCTION OVERLOADING WILL NOT WORK.
// 1. Function Declarations that differ only in return type.
// 2. In class if we have similar function name and parameter but one is static function another one is non-static.
// 3. When we recive array as pointer or array both are similar.
// 4. Const and Volatile doesn't make any difference.
// 5. One function parameter declare as function type and another as pointer to same function type are equivalent.
// 6. Two functions parameter are equal if they differ only if one of them is having default parameter.

#include <iostream>
using namespace std;

void add(int x, int y)
{
    cout << "SECOND" << endl;
}

void add(double x, double y)
{
    cout << "FIRST" << endl;
}

void add(char x)
{
    cout << "THIRD" << endl;
}

int main(void)
{
    add(2.4, 4.5); // this will go to double only. 
    add(23,15); // This will go to int only.
    add('A'); // This will go to char only.
}