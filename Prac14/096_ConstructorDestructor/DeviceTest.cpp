//
// Created by codjs on 2024-05-21.
//
#include "Monitor.h"
#include "Printer.h"
#include "LCD_Monitor.h"
#include "LED_Monitor.h"
int main() {
    {
        Monitor monitor;
    }
    std::cout << "--------------------------" << std::endl;
    {
        Printer printer;
    }
    std::cout << "--------------------------" << std::endl;
    {
        LED_Monitor led_monitor;
        LCD_Monitor lcd_monitor;
    }
}