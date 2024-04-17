#include <future>
#include "static.h"

void inc(std::promise<int> && result) {
    //your implementation
    static int COUNTER = 0;
    // ������ ī���� ���� �����մϴ�.
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