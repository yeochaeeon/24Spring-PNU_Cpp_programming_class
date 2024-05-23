//
// Created by codjs on 2024-05-14.
//
#include "temperature.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

std::string Temperature::print() const {
    std::stringstream ss;
    ss << std::fixed; //iostream
    ss << std::setprecision(1); //iomanip
    std::string result ;
    ss << this->temperature << this->scale ;
    return ss.str();
}
void Temperature::convertToFahrenheit() {
    this->scale = FAHRENHEIT;
    this->temperature = temperature * 9 / 5  + 32 ;
}
void Temperature::convertToCelsius() {
    this->scale = CELSIUS;
    this->temperature = this->temperature - 32 * 9 / 5 ;
}
Temperature Temperature::add(Temperature other){

    if (this->scale != other.scale){
        if(other.scale == FAHRENHEIT){
            other.convertToFahrenheit();
        }
        else{
            other.convertToCelsius();
        }
    }
    return Temperature{this->temperature+other.temperature , this->scale};
}
