//
// Created by codjs on 2024-06-13.
//
#include <iostream>
#include <fstream>

int main() {

    // ifstream, ofstream 은 자동으로 연 파일을 닫는다.
    std::ifstream fin;
    try {
        fin.exceptions(std::ios_base::failbit | std::ios_base::badbit);
        fin.open("config.ini");     //default   is   ios_base::in
    } catch (const std::ios::failure& e) {
        std::cerr << "open,read error" << e.what() << std::endl;
        // std::cerr << e.what() << std::endl; plato ver.
    }

    std::ofstream fout;
    try {
        fout.exceptions(std::ios_base::failbit | std::ios_base::badbit);
        fout.open("config/config.ini");    //default   is   ios_base::out
        fout << "write data in file" << std::endl;
    } catch (const std::ios::failure& e){
        std::cerr << "open,write error" << e.what() << std::endl;
        // std::cerr << e.what() << std::endl; plato ver.
    }


    return 0;
}