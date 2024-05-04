//
// Created by codjs on 2024-05-02.
//
#include "Complex.h"
#include <iostream>

std::ostream& operator << (std::ostream& os,const Complex& c){
    os << c.r << "+" << c.i<<"i";
    return os;
}

