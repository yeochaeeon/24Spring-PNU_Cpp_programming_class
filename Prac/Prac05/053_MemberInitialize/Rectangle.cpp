#include "Rectangle.h"
#include <iostream>
#include <cmath>

Rectangle::Rectangle(double x1, double y1, double x2, double y2) : leftTop(x1,y1), rightBottom(x2,y2) {
    
    double leftX, rightX;
    if (x1 < x2) {
        leftX = x1;
        rightX = x2;
    } else {
        leftX = x2;
        rightX = x1;
    }

    
    double topY, bottomY;
    if (y1 > y2) {
        topY = y1;
        bottomY = y2;
    } else {
        topY = y2;
        bottomY = y1;
    }


    x1 = leftX;
    y1 = topY;
    x2 = rightX;
    y2 = bottomY;

    // leftTop = {x1,y1};
    // rightBottom = (x2,y2);
    
};

double Rectangle::area() const {
    //std::cout << rightBottom.getX() << leftTop.getX() << leftTop.getY() << rightBottom.getY() << std::endl;
    return fabs(( rightBottom.getX() - leftTop.getX() ) * ( leftTop.getY() - rightBottom.getY())) ;
    
}
