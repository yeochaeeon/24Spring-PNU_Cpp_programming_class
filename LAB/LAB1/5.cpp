#include <iostream>
#include <vector>

int main(){
    
    int n;
    std::cin >> n;
    std::vector<int> v;
    int num;
    for ( int i = 0; i < n; i++ ){
        
        std::cin >> num;
        v.push_back(num);
    }
    int idx;
    std::cin >> idx ;
    v.erase(v.begin()+idx);

    int e_num;
    std::cin >> e_num;

    for (int i = 0; i < n; i++ ){
        while (v[i] == e_num){
            v.erase(v.begin()+idx) ;
        }
    }

    int size = v.size();

    std::cout << size ;
    for (int i =0; i < size; i++){
        std::cout << v[i];
    }

}