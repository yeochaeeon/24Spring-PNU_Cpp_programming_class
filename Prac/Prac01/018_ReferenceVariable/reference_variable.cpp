#include <iostream>

void my_swap(int& a ,int& b );

int main(){
    int m,n;
    std::cin >> m >> n;
    my_swap(m,n);
    std::cout << m << " " << n ; 
}

void my_swap(int& a,  int& b){
    int temp = a;
    a = b;
    b = temp;
}