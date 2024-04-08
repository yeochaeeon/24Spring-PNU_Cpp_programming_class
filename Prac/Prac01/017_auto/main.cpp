#include <iostream>
#include <memory> // unique_ptr 쓸 때 들어가야 하는 헤더파일 
#include <tuple>

auto sum(int a, int b){
    return std::tuple{"sum: ", a + b};
}

int main() {
    auto pa = std::make_unique<int>(1);
    auto pb = std::make_unique<int>(2);

    std::cout << *pa << ", " << *pb << std::endl;
    auto my_swap = [ ] (auto a, auto b) { auto temp = *a; *a = *b; *b=temp;};
    my_swap(pa.get(), pb.get());
    std::cout << "a: " << *pa << ", b: " << *pb << std::endl;

    auto [label, result] = sum(*pa, *pb);
    std::cout << label << result << std::endl;

    return 0;
}
