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
        // . ������ �ؼ� �� �ٷ� �ޱ� .

        if(line.empty()) break;
        //return 0; ���� �ϸ� �� �� �ٸ� �ް� ���α׷� �����.
        std::istringstream ss(line);

        while(getline(ss,word,'.')){
            if(word.empty()){
                continue;
                // break �� �����ܺη� ���������� ��
                // continue �� ���� �ݺ����� �Ѿ�� ��
            }
            std::istringstream ss2(word);
            while(getline(ss2,word2,' ')){
                if(word.empty()){
                    continue;
                    // break �� �����ܺη� ���������� ��
                    // continue �� ���� �ݺ����� �Ѿ�� ��
                }
                std::cout << word2 << std::endl;
            }
        }
    }
    return 0;
}
