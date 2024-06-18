//
// Created by codjs on 2024-06-13.
//

#include "Matrix.h"
#include "algorithm"
std::ostream& operator<<(std::ostream& os, const matrix& m) {
    if (m.rows == 0 || m.cols == 0) {
        os << "||\n";
        return os;
    }
    for (size_t i = 0; i < m.rows; ++i) {
        os << "|";
        for (size_t j = 0; j < m.cols; ++j) {
            os << m.data[i][j] << " ";
        }
        os << "|\n";
    }
    return os;
}

matrix matrix::inverse() {
    if (this->rows != 2) {
        matrix result;
        return result;
    }
    else{
        matrix result = { {-data[1][1], data[0][1]}, {data[1][0], -data[0][0]} };
        return result;
    }

}

// Default constructor
matrix::matrix() : rows(0), cols(0) {}


matrix::matrix(const std::initializer_list<std::initializer_list<int>>& init) {
//    for (const auto& row : init) {
//        data.push_back(std::vector<int>(row));
//    }
    std::for_each(init.begin(), init.end(),
                  [this](const auto row){data.push_back(std::vector<int>(row));});
    rows = data.size();
    cols = (rows > 0) ? data[0].size() : 0;
}

matrix::matrix(const matrix& other) : data(other.data), rows(other.rows), cols(other.cols) {}


matrix& matrix::operator=(const matrix& other) {
    if (this != &other) {
        data = other.data;
        rows = other.rows;
        cols = other.cols;
    }
    return *this;
}
matrix matrix::operator+(const matrix& other) const {
    matrix result = *this;
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            result.data[i][j] += other.data[i][j];
        }
    }
    if(other.data.begin() == other.data.end()) { int index = 1 ;}
    return result;
}
