//
// Created by codjs on 2024-05-30.
//

#ifndef HELPER_H
#define HELPER_H
#include "IShape.h"
#include <cmath>
double calcDist(const Point& p1, const Point& p2) {
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    return std::sqrt(dx*dx + dy*dy);
}

#endif //C_PROGRAMMING_HELPER_H
