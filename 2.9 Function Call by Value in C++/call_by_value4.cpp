#include <iostream>
using namespace std;

void update(int x, int y, int z = 100)
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

    update (10,20,30);

    cout << "a: " << a << endl;

    cout << "NOTE: In z it output 30 beacause it just over write the default z value.";
}

// You can also pass more than 1 function in it.

// You can call Update as anything you wish.

// See what is happening here is that code will go to through int 1st and then in int there is update which is directed it to go to the next update with the same as given in the 1st update value so it will run first 2nd update and after running the 2nd update it will return to the 1st update and run the line next to the 1st update.