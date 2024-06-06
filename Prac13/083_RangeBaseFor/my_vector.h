//
// Created by codjs on 2024-06-06.
//

#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include <iostream>
#include <algorithm>
#include <cstddef>
#include <initializer_list>
#include <memory>
#include "my_vector_iterator.h"
template<typename T>
class my_vector {
public:
    // 실습 8-2 에서 정의한 my_vector의 멤버 함수들
    my_vector(size_t n=0){
        _data = std::make_unique<T[]>(n);
    };
    my_vector(std::initializer_list<T> lst){
        _size = lst.size();
        _data = std::make_unique<T[]>(_size);
        int i = 0;
        for(T element: lst){
            _data[i] = element;
            i++;
        }
    };
    my_vector(const my_vector& other ){
        _size = other._size;
        _data = std::make_unique<T[]>(_size);
        for(int i=0 ; i<_size ; i++){
            _data[i] = other._data[i];
        }
    }
    T operator[] (int i){
        return _data[i];
    }
    size_t size(){
        return _size;
    }
    // 추가 함수들 - begin(), end()
    my_vector_iterator<T> begin() {
        return my_vector_iterator<T>(_data.get());
    }

    my_vector_iterator<T> end() {
        return my_vector_iterator<T>(_data.get()+_size);
    }
private:
    size_t _size;
    std::unique_ptr<T[]> _data;
};
#endif //MY_VECTOR_H
