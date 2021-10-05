#include <iostream>
using namespace std;

void update(int x=23, int y=46, int z = 100)
{
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
}

// Remember you give 1st element default value then you must have to give deafult value to all the element next to it otherwise it will not run.

// In update you have to give left value to the input value to run the code.

int main(void)
{
    int a =  10;

    update ();

    cout << "a: " << a << endl;

    cout << "NOTE:It takes all the defalut value because update have no value inputed";
}

// You can also pass more than 1 function in it.

// You can call Update as anything you wish.

// See what is happening here is that code will go to through int 1st and then in int there is update which is directed it to go to the next update with the same as given in the 1st update value so it will run first 2nd update and after running the 2nd update it will return to the 1st update and run the line next to the 1st update.