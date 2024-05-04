//
// Created by codjs on 2024-05-02.
//
#include "Complex.cpp"
#include <iostream>
int main() {
    Complex c1(3, 2);
    Complex c2(1, 1);

    std::cout << c1 + c2 << std::endl;
    std::cout << c1 - c2 << std::endl;

    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;
}
