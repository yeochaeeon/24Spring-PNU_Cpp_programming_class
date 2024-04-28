#include <iostream>
#include <vector>

int main(){
    int SIZE = 0;
    std::cin >> SIZE;
    int* arr = new int[SIZE]; // c에서는 malloc등으로 메모리를 할당했다면 c++에서는 new로 할당함

    for (int i = 0; i < SIZE ;i++) {
        std::cin >> arr[i] ;
    }

    int index ;

    std::cin >> index ;
    int idx2 = arr[index];
    std::cout << arr[idx2] << std::endl;

    delete[] arr ; // 배열인경우 []를 붙여주어야함.. 
    //배열이 아닌 경우 delete p ;와 같이 해주면 됨. 
}