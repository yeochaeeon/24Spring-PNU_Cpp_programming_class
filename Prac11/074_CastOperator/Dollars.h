//
// Created by codjs on 2024-05-16.
//
#ifndef Dollars_h
#define Dollars_h
#include "Cents.h"
class Dollars{
public:
    Dollars(float dollar):dollar(dollar){};
    explicit operator Cents() const {
        return Cents(dollar * 100);
    }
private:
    float dollar;
};
#endif