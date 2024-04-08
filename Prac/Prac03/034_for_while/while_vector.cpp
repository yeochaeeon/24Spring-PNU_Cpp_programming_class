#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n = 0;
    int max  ;
    int min;
    int num;

    std::vector<int> v ;

    while( (std::cin>>num) ) {
        v.push_back(num);
        n++;
    }
    // for(int j:v){
    //     if (j < min){
    //         min = j;
    //     }
    // }
     
    // for(int i:v) {
    //     std::cout << max << std::endl;
    //     if ( i > max ){
    //         max = i;
    //     }

    // }
    
    max = *(max_element(begin(v),end(v)));
    min = *(min_element(begin(v),end(v)));
    std::cout << n << " " << min << " " << max;
}