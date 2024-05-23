//
// Created by codjs on 2024-05-21.
//

#ifndef MONITOR_H
#define MONITOR_H
#include "OutputDevice.h"
class Monitor : public OutputDevice {
public:
    Monitor(){
        std::cout << "Monitor constructor" << std::endl;
    }
    virtual ~Monitor(){
        std::cout << "Monitor destructor" << std::endl;
    }
};

#endif //C_PROGRAMMING_MONITOR_H
