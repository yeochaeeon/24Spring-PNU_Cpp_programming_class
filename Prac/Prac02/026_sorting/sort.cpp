#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n;
    std::vector<int> v ;
    std::cin >> n;
    int num;
    for(int i = 0; i <n ; i++){

        std::cin >> num ; 
        v.push_back(num);

    }

    std::sort(begin(v),end(v));

    for (int i:v) {

        std::cout << i << " ";
    }
}

