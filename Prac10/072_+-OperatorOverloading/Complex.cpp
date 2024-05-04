//
// Created by codjs on 2024-05-02.
//
#include "Complex.h"
std::ostream& operator << (std::ostream& os, const Complex& c){
    os << c.r << "+" << c.i << "i" ;
    return os;
}

Complex Complex::operator+(const Complex rhs) {
    Complex result;
    result.r = this->r + rhs.r ;
    result.i = this->i + rhs.i ;
    return result;
}

Complex Complex::operator-(const Complex rhs) {
    Complex result;
    result.r = this->r - rhs.r;
    result.i = this->i - rhs.i;
    return result;
}