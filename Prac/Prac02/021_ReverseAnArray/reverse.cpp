#include <iostream>

int main(){
    int SIZE = 0;
    std::cin >> SIZE;
    int *arr = new int[SIZE]; // c������ malloc������ �޸𸮸� �Ҵ��ߴٸ� c++������ new�� �Ҵ���  

    for (int i = 0; i < SIZE ;i++) {
        std::cin >> arr[i] ;
    }

    for (int i = SIZE-1 ; i >= 0 ; i--) {
        std::cout << arr[i] <<" " ;
    }
    delete [] arr; // delete ���� [] 
}