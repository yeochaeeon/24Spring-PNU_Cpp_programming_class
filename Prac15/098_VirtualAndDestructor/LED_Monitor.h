//
// Created by codjs on 2024-05-21.
//

#ifndef LED_MONITOR_H
#define LED_MONITOR_H
#include "Monitor.h"
class LED_Monitor : public Monitor{
public:
    LED_Monitor(){
        std::cout << "LED_Monitor constructor" << std::endl;
    }
    ~LED_Monitor(){
        std::cout << "LED_Monitor destructor" << std::endl;
    }


};

#endif //C_PROGRAMMING_LED_MONITOR_H
