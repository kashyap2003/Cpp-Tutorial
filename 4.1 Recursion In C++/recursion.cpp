#include <iostream>
using namespace std;

void print(int times)
{
    if (times == 0)
        return; // This function will just return to print(times) and print(3) after satsifying it.
    cout << "C++: " << times << endl;
    --times;
    print(times); // This will print in reverse because it will print only after return function will run.
    cout << "Reverse: " << times << endl;
} 

int main(void)
{
    print(3);
}