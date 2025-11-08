#include "Triangle.h"

Triangle::Triangle() : a(Point()), b(Point()), c(Point()) {}
Triangle::Triangle(const Point& a, const Point& b, const Point& c) : a(a), b(b), c(c) {}

double Triangle::perimetre() const {
    Segment ab(a, b);
    Segment bc(b, c);
    Segment ca(c, a);
    return ab.longueur() + bc.longueur() + ca.longueur();
}

