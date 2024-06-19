//
// Created by codjs on 2024-06-19.
//
#include <stack>
#include <iostream>

int main() {

    std::stack<int> stk;
    int n;
    std::cin >> n;
    std::string command;
    int num;
    while ( n!=0 ){
        std::cin >> command ;
        if (command == "push") {
            std::cin >> num;
            stk.push(num);
        }
        else if ( command == "size") {
            int size = stk.size();
            std::cout << size << std::endl;
        }
        else if ( command == "pop") {
            int currentTop = 0;
            if (stk.size() == 0) {
                currentTop = -1;
                std::cout << currentTop << std::endl;
            }
            else {
                currentTop = stk.top();stk.pop();
                std::cout << currentTop << std::endl;
            }
        }
        else if ( command == "empty") {
            int isEmpty = 0;
            stk.size() == 0 ? isEmpty=1 : isEmpty=-1;
            std::cout << isEmpty << std::endl;
        }
        n--;
    }
//    stk.push(5); stk.push(10); //top에 원소 입력
//    int a = stk.top(); stk.pop();
//    std::cout << a << std::endl; //10 출력

}