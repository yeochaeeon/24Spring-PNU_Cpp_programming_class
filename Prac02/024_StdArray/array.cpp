#include <iostream>
#include <array>
#include <algorithm>

int main(){
    std::array<int,10> arr; 
    //std::array �� �׳� array �� �ٸ� �� : 
    //�ݺ��ڳ� ���Կ����� ��밡��.
    for (int i = 0; i < 10; i++){
        std::cin >> arr[i] ;
    }

    int min = *(std::min_element(begin(arr),end(arr)));
    int max = *(std::max_element(begin(arr),end(arr)));

    std::cout << max <<  " " <<min;
    
}