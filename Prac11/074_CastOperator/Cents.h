//
// Created by codjs on 2024-05-16.
//
#ifndef cent_h
#define cent_h
class Cents {
public:
    Cents(float cent):cent(cent){};
    explicit operator int () const {
        return cent;
    } //explicit 의 차이 :

private:
    float cent;
};
#endif
