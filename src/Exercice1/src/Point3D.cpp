#include "Point3D.h"
#include <iostream>
using namespace std;

Point3D::Point3D() {
    x = 0;
    y = 0;
    z = 0;
}

Point3D::Point3D(double xv, double yv, double zv) {
    x = xv;
    y = yv;
    z = zv;
}


double Point3D::getX() const { return x; }
double Point3D::getY() const { return y; }
double Point3D::getZ() const { return z; }

