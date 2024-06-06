//
// Created by codjs on 2024-05-30.
//

#ifndef CIRCLE_H
#define CIRCLE_H
#include "IShape.h"
#include <cmath>

class Circle : public IShape {
public:
    Circle(const Point center, const double radius) : IShape({center}), radius(radius){};
    ~Circle(){
        std::cout << "Circle destructor called" << std::endl;
    }
    double getArea() const override {
        return 3.141592 * radius * radius;
    }
    double getPerimeter() const override {
        return 2 * radius * 3.141592;
    }
protected:
    std::string toString() const override {
        std::ostringstream oss;
        oss << std::fixed << std::setprecision(2);
        oss << "Circle Area: "<< getArea() << ", Perimeter: " << getPerimeter() ;
        return oss.str();
    }
private:
    double radius;
};

#endif //C_PROGRAMMING_CIRCLE_H
