#include <iostream>
using namespace std;

int main(void)
{
    int matrix [3] [2] = {
                          {1,2},
                          {4,5},
                          {7,8}
                         };

    cout << matrix [2][0] << endl;
    matrix [2][0] = 10;
    cout << matrix [2][0] << endl;


    cout << "NOTE: You can also change the matrix input even after creating matrix by\nmatrix[row you want to change][column you want to change] = (Input which no. or character you want to replace at that place)";
    
}