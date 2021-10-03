#include <iostream>
using namespace std;

int main(void)
{
    int matrix [3] [2] = {
                          {1,2},
                          {4,5},
                          {7,8}
                         };

    char matrix1 [3] [2] = {
                          {'a','d'},
                          {'b','e'},
                          {'c','f'}
                         };

    cout << matrix [0][1] << endl;

    cout << matrix1 [1][1] << endl;

    cout << "You can print both int amd char in matrix and matrix also start with zero so always remember the formate\n(0,1,2) in row and (0,1,2) in column\nAnd also remeber 1st [] is for row and 2nd [] is for column";
    
}