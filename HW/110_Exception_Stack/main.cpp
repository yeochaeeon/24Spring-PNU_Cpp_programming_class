//
// Created by codjs on 2024-06-19.
//
#include "Stack.h"
#include "StackException.h"

int main(){
    Stack<char> stack1(1);
    stack1.push('a');
    stack1.pop();stack1.pop();
    stack1.print();

    Stack<char> stack2(1);
    stack2.push('a');
    stack2.push('b');
    stack2.print();

    Stack<int> stack3(1);
    stack3.push(1);     stack3.pop();
    stack3.push(2);
    stack3.print();      // 2 출력됨
    stack3.pop();

    Stack<int> stack4(2);
    stack4.push(1); stack4.push(2);
    stack4.pop();    stack4.pop();
    stack4.push(3);
    stack4.print();    // 3 출력됨

}

