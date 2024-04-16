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
    // remove()�� ��Ҹ� ������ �������� �ʰ� �׳� ������ �̵���Ű�� �۾��� ��...
    // ��ȯ�� : �������� ���� ���� ������ ���� ���ο� ��ġ���� �ٷ� �ڿ� �ִ� ��ġ�� iterator ��ȯ;
    // vector�� size�� capacity �� �پ���� ���� 
    v.erase(end_idx,v.end());
    int size = v.size();
    std::cout << size << std::endl;

    for(int i:v) {
        std::cout << i << " " ;
    }

    

}