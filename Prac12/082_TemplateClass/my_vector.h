//
// Created by codjs on 2024-06-04.
//

#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include <algorithm>
#include <initializer_list>
#include <memory>

template<typename T>
class my_vector {
public:
    explicit my_vector(size_t N=0) noexcept {
        _size = N;
        _data = std::make_unique<T[]>(N);
    };  // 생성자를 구현하시오
    my_vector(std::initializer_list<T> lst) noexcept : my_vector(lst.size()){
        int i = 0;
        for(auto& element : lst) {
            _data[i] = element;
            ++i; ++_size;
        }
    } ;  // 생성자를 구현하시오
    my_vector(const my_vector<T>& other) noexcept{
        _data = std::make_unique<T[]>(other._size);
        for (int i = 0 ; i < other._size; i++ ){
            _data[i] = other._data[i];
        }
        _size = other._size;
    } ; // 복사 생성자를 구현하시오 (deep copy)
    T& operator[](int i) {
        return _data[i];
    } ; // subscript operator, 오퍼레이터 오버로딩 하시오
    size_t size() const {
        return _size;
    }; // 멤버 함수를 구현하시오
private:
    size_t _size;
    std::unique_ptr<T[]> _data;
    // T : 단일 객체에 대한 소유권
    // T[] : 배열에 대한 소유권
};

#endif //MY_VECTOR_H
