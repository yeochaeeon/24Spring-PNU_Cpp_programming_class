#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main() {

    std::vector<int> v;
    std::istream_iterator<int>cin_iter(std::cin) ;
    std::istream_iterator<int> end ; //end of stream

    std::copy( cin_iter, end, std::back_inserter(v) );
    sort(v.begin(),v.end()); // 오름차순
    //내림차순  : sort(v.rbegin(),v.rend());
    // , [](int a, int b) {return a < b};
    std::ostream_iterator<int> cout_iter(std::cout, " ");
    std::copy(v.begin(), v.end(), cout_iter);    
    // 음 ... 어찌어찌 짰지만..
    // 첨부터 끝까지 다 모르겠는데 ....? 
}