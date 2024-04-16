#include <iostream>

int main(){
    int SIZE = 0;
    std::cin >> SIZE;
    int *arr = new int[SIZE]; // c에서는 malloc등으로 메모리를 할당했다면 c++에서는 new로 할당함  

    for (int i = 0; i < SIZE ;i++) {
        std::cin >> arr[i] ;
    }

    for (int i = SIZE-1 ; i >= 0 ; i--) {
        std::cout << arr[i] <<" " ;
    }
    delete [] arr; // delete 띄우고 [] 
}