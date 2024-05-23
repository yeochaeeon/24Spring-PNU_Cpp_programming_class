//
// Created by codjs on 2024-05-16.
//
#include <iostream>
#include "Dollars.h"
#include "Cents.h"
int main() {
    Dollars dollar {1};
    Cents cent = (Cents)dollar; //class 간 형 변환
    //Cents cent = dollar; // 로 해줘도 됨
    std::cout << (int) cent << std::endl;
}
