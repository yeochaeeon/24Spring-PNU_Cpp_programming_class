//
// Created by codjs on 2024-05-14.
//
#include <cmath>
#include "rectangle.h"
Rectangle::Rectangle(double x1, double y1, double x2, double y2) :
        leftTop(x1,y1), rightBottom(x2,y2){};

double Rectangle::area() const {
    return fabs((leftTop.getX()-rightBottom.getX())*(leftTop.getY()-rightBottom.getY()));
}