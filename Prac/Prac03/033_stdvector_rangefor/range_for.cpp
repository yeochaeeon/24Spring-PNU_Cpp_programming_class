#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> vec; 
    int num ; 
    for(int i = 0; i < n ; i++) {
        std::cin >> num ;
        vec.push_back(num);
    }
    int sum = 0;
    for (int i:vec){ // i�� index�� �ƴ϶� ���Ұ� �� ��ü
        sum = sum + i ;
    }
    // for (int i = 0 ; i < n ; i++){
    //     sum = sum + vec[i];
    // }
    std::cout << sum ;
}   