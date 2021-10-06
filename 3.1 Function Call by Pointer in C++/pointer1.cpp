#include <iostream>
using namespace std;

void change(char *new_a)
{
    *new_a = 'b';
}

int main(void)
{
    char a = 'a';

    change(&a);

    cout << a << endl;
}

// In this code we are giving address of a to change and change have a pointer(*) so it will reference the address of a and after that *new_a just dereference the address of a and put the value of 'b' in a's address. 