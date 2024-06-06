//
// Created by codjs on 2024-05-30.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "IShape.h"
#include "Helper.h"
class Rectangle: public IShape{
public:
    Rectangle(std::vector<Point> points): IShape(points){};
    //아 맞다 이렇게 하는 거였지..
    ~Rectangle() {
        std::cout << "Rectangle destructor called" << std::endl;
    };
    double getArea() const override {
        double height = calcDist(points[0],points[1]);
        double width = calcDist(points[1],points[2]);
        return height * width;
    }
    double getPerimeter() const override {
        double height = calcDist(points[0],points[1]);
        double width = calcDist(points[1],points[2]);
        return 2*(height + width);
    }
protected:
    std::string toString() const override {
        std::ostringstream oss;
        oss << std::fixed << std::setprecision(2);
        oss << "Rectangle Area: "<< getArea() << ", Perimeter: " << getPerimeter() ;
        return oss.str();
    }

};
#endif //RECTANGLE_H
