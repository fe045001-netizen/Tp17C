#include <iostream>
#include "Point.h"
#include "Segment.h"
#include "Triangle.h"
using namespace std;

int main() {
    Point A(1, 2);
    Point B(3, 4);
    Point C(5, 6);

    Triangle T(A, B, C);

    cout << "Perimetre du triangle = " << T.perimetre() << endl;
    return 0;
}

