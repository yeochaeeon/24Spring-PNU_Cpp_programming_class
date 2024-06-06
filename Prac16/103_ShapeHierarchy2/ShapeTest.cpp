//
// Created by codjs on 2024-06-03.
//
#include <memory>
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "Polygon.h"
#include "IShape.h"
int main() {
    std::vector<std::unique_ptr<IShape>> shapes;

    shapes.emplace_back(std::make_unique<Rectangle>(std::vector<Point>{{0, 0}, {0, 2}, {2, 2}, {2, 0}}));
    shapes.emplace_back(std::make_unique<Triangle>(std::vector<Point>{{0, 0}, {0, 2}, {2, 2}}));
    shapes.emplace_back(std::make_unique<Circle>(Point{0, 0}, 3));
    shapes.emplace_back(std::make_unique<Polygon>(std::vector<Point>{{0, 0}, {0, 2}, {2, 2}, {2, 0}, {1, 1}}));

    doingSomething(shapes);

    return 0;
}