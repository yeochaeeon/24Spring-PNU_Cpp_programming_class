//
// Created by codjs on 2024-06-03.
//

#ifndef POLYGON_H
#define POLYGON_H
#include <memory>
#include <numeric>
#include <iomanip>
#include "IShape.h"
#include "Helper.h"
void doingSomething(const std::vector<std::unique_ptr<IShape>>& shapes) {
    for (const auto& s : shapes)
        std::cout << *s << std::endl;

    double totalArea = accumulate(shapes.cbegin(), shapes.cend(), 0.0,
                                  [](double cur_sum, const auto& rhs){
                                      return cur_sum + (*rhs).getArea();
                                  });

    double totalPerimeter = accumulate(shapes.cbegin(), shapes.cend(), 0.0,
                                       [](double cur_sum, const auto& rhs){
                                           return cur_sum + (*rhs).getPerimeter();
                                       });
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "totalArea: " << totalArea << ", " << "totalPerimeter: " << totalPerimeter << std::endl;
}

class Polygon : public IShape {
public:
    Polygon(const std::vector<Point>& points) : IShape(points){}
    ~Polygon(){
        std::cout << "Polygon destructor called" << std::endl;
    }
    double getArea() const override {
        // Shoelace formula for calculating area of a polygon
        double area = 0;
        int n = points.size();
        for (int i = 0; i < n; ++i) {
            int j = (i + 1) % n;
            area += points[i].x * points[j].y - points[j].x * points[i].y;
        }
        area = abs(area) / 2.0;
        return area;

    }
    double getPerimeter() const override {
        double edge1 = calcDist(points[0],points[1]);
        double edge2 = calcDist(points[1],points[2]);
        double edge3 = calcDist(points[2],points[3]);
        double edge4 = calcDist(points[3],points[4]);
        double edge5 = calcDist(points[4],points[0]);

        return edge1 + edge2 + edge3 + edge4 + edge5;
    }
protected:
    std::string toString() const override {
        std::ostringstream oss;
        oss << std::fixed << std::setprecision(2);
        oss << "Polygon Area: "<< getArea() << ", Perimeter: " << getPerimeter() ;
        return oss.str();
    }
};
#endif //POLYGON_H
