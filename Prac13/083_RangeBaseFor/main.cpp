//
// Created by codjs on 2024-06-06.
//
#include "my_vector.h"
#include "my_vector_iterator.h"
#include <numeric>
#include <iostream>

int main() {

    my_vector<int> vec = {1, 2, 3, 4, 5};
    my_vector<int> vec2(vec);
    *(++vec2.begin()) = 50;

    for (const auto& it : vec2)
        std::cout << it << ' ';
    std::cout << '\n';

    std::cout << std::accumulate(vec2.begin(), vec2.end(), 0) << '\n';
    return 0;
}