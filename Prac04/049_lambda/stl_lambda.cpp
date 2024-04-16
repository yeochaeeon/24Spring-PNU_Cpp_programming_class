#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

int main(){
    int N, k;
    std::cin >> N >> k ;
    std::vector<double> v;
    //insert number to vector
    std::generate_n(std::back_inserter(v),N,[](){return *(std::istream_iterator<double>(std::cin));});

    // print number which satisfies condition
    copy_if(v.begin(),v.end(),std::ostream_iterator<int>(std::cout," "),[=](int x){return k > x; });
    // [ ] 안에 = 는 외부 변수를 모두 불러 와서 사용할 수 있게함. -> call by value 느낌.
    // [ ] 안에 & 는 외부 변수를 모두 불러오고 값까지 바꿀 수 있다. -> call by reference 느낌.

}