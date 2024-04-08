#include "Point.h"
#include <cmath>
Point::Point(double x, double y ) : x(x), y(y) {}; 
//������ �� x=0�̷��� �����ϸ� �ȵ� . �ߺ� ����..

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::norm() const {
    return sqrt(x*x+y*y);
}