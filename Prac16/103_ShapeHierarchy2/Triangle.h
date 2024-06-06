//
// Created by codjs on 2024-05-30.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "IShape.h"
#include "Helper.h"
class Triangle : public IShape{
public:
    Triangle(const std::vector<Point>& points) : IShape(points){}
    ~Triangle(){
        std::cout << "Triangle destructor called" << std::endl;
    }
    double getArea() const override {
        double width = calcDist(points[1],points[2]);
        double height =calcDist(points[0],points[1]);
        return width * height * 0.5;
    }
    double getPerimeter() const override {
        double edge1 = calcDist(points[0],points[1]);
        double edge2 = calcDist(points[1],points[2]);
        double edge3 = calcDist(points[2],points[0]);

        return edge1 + edge2 + edge3 ;
    }
protected:
    std::string toString() const override {
        std::ostringstream oss;
        oss << std::fixed << std::setprecision(2);
        oss << "Triangle Area: "<< getArea() << ", Perimeter: " << getPerimeter() ;
        return oss.str();
    }
};
#endif //C_PROGRAMMING_TRIANGLE_H
