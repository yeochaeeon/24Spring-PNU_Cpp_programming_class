//
// Created by codjs on 2024-04-28.
//
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main(){
    std::string line;
    std::string word;

    while(std::getline(std::cin,line,'.')){
        // . 전까지 해서 한 줄로 받기 .

        if(line.empty()) break;
        std::istringstream ss(line);

        while(getline(ss,word,' ')){
            if(word.empty()){
                continue;
                // break 는 루프외부로 빠져나가는 거
                // continue 는 다음 반복으로 넘어가는 거
            }
            std::cout << word << std::endl;
        }
    }
    return 0;
}
