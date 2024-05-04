//
// Created by codjs on 2024-04-28.
//
#include <iostream>
#include <string>
#include <sstream>

int main(){
    std::string line;
    std::string word;
    std::string word2;

    while(std::getline(std::cin,line,'.')){
        // . 전까지 해서 한 줄로 받기 .

        if(line.empty()) break;
        //return 0; 으로 하면 걍 한 줄만 받고 프로그램 종료됨.
        std::istringstream ss(line);

        while(getline(ss,word,'.')){
            if(word.empty()){
                continue;
                // break 는 루프외부로 빠져나가는 거
                // continue 는 다음 반복으로 넘어가는 거
            }
            std::istringstream ss2(word);
            while(getline(ss2,word2,' ')){
                if(word.empty()){
                    continue;
                    // break 는 루프외부로 빠져나가는 거
                    // continue 는 다음 반복으로 넘어가는 거
                }
                std::cout << word2 << std::endl;
            }
        }
    }
    return 0;
}
