#include <iostream>
using namespace std;

int main(void)
{
    int matrix [3] [2] = {
                          {1,2},
                          {4,5},
                          {7,8}
                         };

    cout << matrix [1][10] << endl;

    cout << "NOTE: It will even work if you exceed the matrix output.\nBut the answer is not correct at all.";

}