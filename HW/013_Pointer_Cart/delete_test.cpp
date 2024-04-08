#include <iostream>

int main(){
    int* p = nullptr;
    std::cout << p << std::endl;
    p = new int;
    std::cout << p << std::endl;
    *p = 2;
    std::cout << *p << std::endl;
    delete p;
    std::cout << "p=" << p << " "<< "*p=" << *p << std::endl;

}