//
// Created by codjs on 2024-05-21.
//

#ifndef C_PROGRAMMING_LCD_MONITOR_H
#define C_PROGRAMMING_LCD_MONITOR_H
#include "Monitor.h"
class LCD_Monitor : public Monitor {
public:
    LCD_Monitor(){ std::cout << "LCD_Monitor constructor" << std::endl; }
    ~LCD_Monitor(){ std::cout << "LCD_Monitor destructor" << std::endl; }
};
#endif //C_PROGRAMMING_LCD_MONITOR_H
