#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

int main(){
    int N, k;
    std::cin >> N >> k ;
    std::vector<double> v;
    //insert number to vector
    std::generate_n(std::back_inserter(v),N,[](){return * (std::istream_iterator<double>{std::cin});});

    // print number which satisfies condition
    copy_if(v.begin(),v.end(),std::ostream_iterator<int>(std::cout," "),[=](int x){return k > x; });

}