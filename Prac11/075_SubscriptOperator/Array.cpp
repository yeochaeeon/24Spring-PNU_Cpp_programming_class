//
// Created by codjs on 2024-05-04.
//
#include "Array.h"
#include <iostream>
Array::Array(std::initializer_list<int> args, size_t size) :
_size(size), data(new int[size]){

    std::copy(args.begin(),args.end(),data.get());
    //data.get()으로 data가 가리키는 메모리에 직접접근한다 .
}
//위에거 or 밑에거 둘 다 해도 됨 . data가 unique_ptr 이라서 그럼.
//Array::Array(std::initializer_list<int> args, size_t size) {
//    _size=size;
//    data = std::make_unique<int[]>(size);
//
//    std::copy(args.begin(),args.end(),data.get());
//}

int& Array::operator [] (int index) {
    return data[index];
}

size_t Array::size() const {
    return _size;
}