#include <iostream>
#include "Matrix.h"

using namespace std; 

int main() {
  
    Matrix<int,2,2> A;
    Matrix<int,2,2> B;

    A.at(0,0) = 2; A.at(0,1) = 4;
    A.at(1,0) = 1; A.at(1,1) = 3; 
   

    B.at(0,0) = 7; B.at(0,1) = 5; 
    B.at(1,0) = 6; B.at(1,1) = 4; 
  

    auto C = A + B;
    cout << "A + B = \n" << C << "\n";

    auto D = A * B;
    cout << "A * B = \n" << D << "\n";

    Matrix<double,3,3> X;
    Matrix<double,3,3> Y;

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) {
            X.at(i,j) = i + j + 1.0;
            Y.at(i,j) = (i+1) * (j+1);
        }

    cout << "X + Y = \n" << (X+Y) << "\n";
    cout << "X * Y = \n" << (X*Y) << "\n";

    return 0;
}

