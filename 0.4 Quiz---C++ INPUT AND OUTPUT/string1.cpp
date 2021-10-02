#include <iostream>
using namespace std;

int main(void)
{
    string b;
    std::getline(cin,b);
    cout << b << endl;

    cout << "NOTE: If you put string with [std::getline(cin,{variable with string})] than it will display whatever you have written in the string" << endl;
}