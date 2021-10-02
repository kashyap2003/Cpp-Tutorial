#include <iostream>
using namespace std;

int main(void)
{
    string a;
    cout << "Write anything to get output what you have written" << endl;
    std::getline(cin,a);
    cout << a << endl;
}