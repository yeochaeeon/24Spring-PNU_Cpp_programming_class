//
// Created by codjs on 2024-05-14.
//
#include "point.cpp"
class Rectangle {
public:
    // implements the constructor with member initializer list
    Rectangle(double x1, double y1, double x2, double y2) ;
    double area() const ;
private:
    Point leftTop, rightBottom;
};

