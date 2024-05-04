//
// Created by codjs on 2024-05-04.
//
#include "Array.cpp"
int main(){
    Array myArr {{1, 2, 3, 4}, 4};
    for (int i = 0; i < myArr.size(); ++i)
        std::cout << myArr[i] <<std::endl;
}
