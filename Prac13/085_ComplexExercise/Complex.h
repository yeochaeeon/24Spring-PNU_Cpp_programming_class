//
// Created by codjs on 2024-06-06.
//
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <array>
#include <algorithm>

template <typename T, size_t N>

auto myFind(const std::array<T,N>& arr,const T& search){
    auto found = std::find(arr.begin(),arr.end(),search);
    //Complex타입을 find 하기 위해 == opertor 선언이 필요하다.
    return found;
}

class Complex {
public:
    Complex(){};
    Complex(int r, int i):i_(i),r_(r){}
//    bool operator != (Complex complex){
//        return ((r_ != complex.r_) || (i_ != complex.i_));
//    }
    bool operator==(const Complex& other) const {
        return (r_ == other.r_) && (i_ == other.i_);
    }
    friend std::ostream& operator << (std::ostream& os,Complex complex);

private:
    int i_;
    int r_;
};
std::ostream& operator << (std::ostream& os,Complex complex ){
    std::cout << complex.r_ << " + "<<complex.i_ <<"i"<< std::endl;
    return os;
}
#endif COMPLEX_H