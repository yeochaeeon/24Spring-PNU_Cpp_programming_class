#include <iostream>
#include <vector>
// #include "data.cpp"

extern std::vector<int> vec;
// extern int total;

void read(){
    int n ; 
    std::cin >> n;
    int num ; 
    
    for (int i = 0 ; i < n ; i++){
        std::cin >> num ;
        vec.push_back(num);
    }
}