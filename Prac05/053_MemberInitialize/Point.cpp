#include "Point.h"
#include <cmath>
Point::Point(double x, double y ) : x(x), y(y) {}; 
//정의할 때 x=0이렇게 정의하면 안됨 . 중복 정의..

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::norm() const {
    return sqrt(x*x+y*y);
}