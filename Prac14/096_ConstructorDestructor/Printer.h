//
// Created by codjs on 2024-05-21.
//

#ifndef C_PROGRAMMING_PRINTER_H
#define C_PROGRAMMING_PRINTER_H
#include "OutputDevice.h"
class Printer : public OutputDevice {
public:
    Printer(){std::cout << "Printer constructor" << std::endl;}
    ~Printer(){std::cout << "Printer destructor" << std::endl;}
};
#endif //C_PROGRAMMING_PRINTER_H
