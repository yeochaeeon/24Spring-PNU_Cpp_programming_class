#include <iostream>
#include <array>
#include <algorithm>

int main(){
    std::array<int,10> arr; 
    //std::array 가 그냥 array 와 다른 점 : 
    //반복자나 대입연산자 사용가능.
    for (int i = 0; i < 10; i++){
        std::cin >> arr[i] ;
    }

    int min = *(std::min_element(begin(arr),end(arr)));
    int max = *(std::max_element(begin(arr),end(arr)));

    std::cout << max <<  " " <<min;
    
}