//
// Created by codjs on 2024-05-14.
//
#include <iostream>
#include "rectangle.cpp"
int main() {
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    Rectangle rectangle {x1, y1, x2, y2};
    std::cout << rectangle.area() << std::endl;
}