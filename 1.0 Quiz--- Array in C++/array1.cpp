#include <iostream>
using namespace std;

int main(void)
{
    int number[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << number[0] << endl;
    cout << 4[number] << endl;
    cout << *(number + 5) << endl;
    cout << *(7 + number) << endl;

    cout << "NOTE: x = number you want to output\n number[x] = x[number] = *(number + x) = *(x + number)\nYou can write this in cout in whatever form you like to get the result";
}