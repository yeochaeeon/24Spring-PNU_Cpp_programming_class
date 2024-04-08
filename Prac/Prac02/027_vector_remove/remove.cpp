#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int N, num;
    std::vector<int> v;

    std::cin >> N ;
    
    for(int i = 0; i < N; i++){
        std::cin >> num;
        v.push_back(num);
    }

    int offset ;

    auto start = v.begin();
    std::cin >> offset;
    v.erase(start + offset);

    int del_num;
    std::cin >> del_num;
    
    auto end_idx = std::remove(v.begin(),v.end(),del_num);
    // remove()는 요소를 실제로 제거하지 않고 그냥 끝으로 이동시키는 작업만 함...
    // 반환값 : 삭제되지 않은 가장 마지막 값의 새로운 위치에서 바로 뒤에 있는 위치의 iterator 반환;
    // vector의 size나 capacity 는 줄어들지 않음 
    v.erase(end_idx,v.end());
    int size = v.size();
    std::cout << size << std::endl;

    for(int i:v) {
        std::cout << i << " " ;
    }

    

}