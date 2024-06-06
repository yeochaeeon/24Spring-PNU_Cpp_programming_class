//
// Created by codjs on 2024-05-30.
//
#include "IShape.h"
#include <memory>
#include <numeric> // accumulate
#include <iomanip> // setprecision
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

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


int main() {

    std::vector<std::unique_ptr<IShape>> shapes;

    shapes.emplace_back(std::make_unique<Rectangle>(std::vector<Point>{{0, 0}, {0, 2}, {2, 2}, {2, 0}}));
    shapes.emplace_back(std::make_unique<Triangle>(std::vector<Point>{{0, 0}, {0, 2}, {2, 2}}));
    shapes.emplace_back(std::make_unique<Circle>(Point{0, 0}, 3));

    doingSomething(shapes);

    return 0;
}