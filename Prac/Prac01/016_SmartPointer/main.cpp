#include <iostream>
#include <memory>

using namespace std;



void update(int* a, int* b);

int main(){

    unique_ptr<int> pa {new int{}};
    unique_ptr<int> pb {new int{}};

    std::cin >> *pa ;
    std::cin >> *pb ;

    update(pa.get(), pb.get()); // 왜 .get()써야함 ?????

}



void update(int* a, int* b){

    int na = *a + *b;
    int nb = *a - *b;

    std::cout << na << std::endl << nb;

}