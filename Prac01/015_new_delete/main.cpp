#include <iostream>
#include <vector>

int main(){
    int SIZE = 0;
    std::cin >> SIZE;
    int* arr = new int[SIZE]; // c������ malloc������ �޸𸮸� �Ҵ��ߴٸ� c++������ new�� �Ҵ���

    for (int i = 0; i < SIZE ;i++) {
        std::cin >> arr[i] ;
    }

    int index ;

    std::cin >> index ;
    int idx2 = arr[index];
    std::cout << arr[idx2] << std::endl;

    delete[] arr ; // �迭�ΰ�� []�� �ٿ��־����.. 
    //�迭�� �ƴ� ��� delete p ;�� ���� ���ָ� ��. 
}