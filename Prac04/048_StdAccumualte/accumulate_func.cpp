//
// Created by codjs on 2024-04-17.
//
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <numeric>



int main() {

    int N; std::cin >> N;
    std::vector<double> vec;
    std::generate_n(std::back_inserter(vec),
                     N,
                    [] () { return *(std::istream_iterator<double>{std::cin}); });

    int total ;

    double sum = std::accumulate(vec.begin(),vec.end(),0.0);
    // ����° ���� : sum �� �ʱⰪ.
//    std::for_each(vec.begin(),
//                  vec.end(),
//                  [&total](int i){total = total + i;});

    std::cout << sum << std::endl;
}