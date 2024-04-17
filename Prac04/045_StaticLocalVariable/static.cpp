#include <future>
#include "static.h"

void inc(std::promise<int> && result) {
    //your implementation
    static int COUNTER = 0;
    // 증가된 카운터 값을 설정합니다.
    for (int i = 0; i < 100000 ; ++i){
        ++COUNTER;
    }
    result.set_value(COUNTER);
}

int getCounter() {
    // your implementation
    static int COUNTER = 0;
    return ++COUNTER;
}