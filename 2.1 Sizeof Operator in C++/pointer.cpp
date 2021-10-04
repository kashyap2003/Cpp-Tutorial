#include <iostream>
using namespace std;

int main()
{
    char *c = new char('a');
    cout << sizeof(c) << endl;
    cout << sizeof(*c) << endl;

    int *p = new int(10);
    cout << sizeof(p) <<endl;
    cout << sizeof(*p) <<endl;

    double *d = new double(15.3);
    cout << sizeof(d) <<endl;
    cout << sizeof(*d) <<endl;

    cout << "IF you put pointer(*) in sizeof then it will show the size of element otherwise it will only show 4 bytes in answer";
}