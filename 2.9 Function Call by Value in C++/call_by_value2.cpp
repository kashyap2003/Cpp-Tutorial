#include <iostream>
using namespace std;

void update(int x, int y, int z)
{
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
}

int main(void)
{
    int a =  10;

    update (10,20,30);

    cout << "a: " << a << endl;
}

// You can also pass more than 1 function in it.

// You can call Update as anything you wish.

// See what is happening here is that code will go to through int 1st and then in int there is update which is directed it to go to the next update with the same as given in the 1st update value so it will run first 2nd update and after running the 2nd update it will return to the 1st update and run the line next to the 1st update.