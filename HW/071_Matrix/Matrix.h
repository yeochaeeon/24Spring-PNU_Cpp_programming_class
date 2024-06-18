//
// Created by codjs on 2024-06-13.
//
#include <iostream>
#include <vector>
#ifndef MATRIX_H
#define MATRIX_H
class matrix {
public:
    matrix();
    matrix(const std::initializer_list<std::initializer_list<int>>& init);
    matrix(const matrix& other);

    matrix& operator=(const matrix& other);
    matrix operator+(const matrix& other) const;
    matrix inverse() ;

    friend std::ostream& operator<<(std::ostream& os, const matrix& m);
private:
    std::vector<std::vector<int>> data;
    size_t rows, cols;

};
#endif //MATRIX_H
