//
// Created by codjs on 2024-06-04.
//

#ifndef MY_ACCUMULATE_H
#define MY_ACCUMULATE_H
#include <algorithm>
template<typename T, typename U>
U my_accumulate(T _begin, T _end, U init){
    //템플릿 함수를 구현하시오.
    std::for_each(_begin,_end,[&init](const auto& i){
        init = init + i;
    });
    return init;

}
#endif //MY_ACCUMULATE_H
