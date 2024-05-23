//
// Created by codjs on 2024-05-21.
//

#ifndef OUTPUTDEVICE_H
#define OUTPUTDEVICE_H
#include <iostream>

class OutputDevice{
public:
    OutputDevice(){
        std::cout << "OutputDevice constructor" << std::endl;
    }
    virtual ~OutputDevice(){
        std::cout << "OutputDevice destructor" << std::endl;
    }
};

#endif //C_PROGRAMMING_OUTPUTDEVICE_H
