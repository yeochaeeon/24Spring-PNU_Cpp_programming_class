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
        // . ������ �ؼ� �� �ٷ� �ޱ� .

        if(line.empty()) break;
        std::istringstream ss(line);

        while(getline(ss,word,' ')){
            if(word.empty()){
                continue;
                // break �� �����ܺη� ���������� ��
                // continue �� ���� �ݺ����� �Ѿ�� ��
            }
            std::cout << word << std::endl;
        }
    }
    return 0;
}
