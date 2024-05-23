//
// Created by codjs on 2024-05-14.
//
#include "point.h"
Point::Point(double x, double y):x(x),y(y) { };

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}