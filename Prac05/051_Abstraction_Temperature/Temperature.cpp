#include "Temperature.h"

// implement your code

// Temperature::Temperature( double temp, SCALE scale )
// {
//     temperature = temp;
//     Temperature scale = scale; // 변수 같으면 앞에 객체 이름 붙여줘야하더라..
// }

Temperature::Temperature(double temp, SCALE scale) : temperature(temp), scale(scale) { } ; 


void Temperature::convertToFahrenheit() {
   this->temperature = this->temperature * 9/5 + 32 ;
   this->scale = FAHRENHEIT; // 스케일도 바꿔줘야 함 .. 
   
}

void Temperature::convertToCelsius() { 
    this->temperature = (this->temperature - 32) * 5 / 9 ;
    this->scale = CELSIUS; // 스케일도 바꿔줘야함 ..
    
}

Temperature Temperature::add(Temperature other) {
    if ( other.scale != this-> scale ){ //other 은 뒤에 . 임!
        if (other.scale == CELSIUS) {
            other.convertToFahrenheit();
            
        }
        else {
            other.convertToCelsius();
            
        }
        // 요 안에 리턴을 넣으면 어떡하냐 !!!      
    } 
    Temperature result = {this->temperature + other.temperature, this->scale};
    return result;
}

std::string Temperature::print() const {
    std::stringstream ss; 
    ss << std::fixed;
    ss << std::setprecision(1);
    if (this->scale == FAHRENHEIT) {
        ss << this->temperature << " F\n";
    } else {
        ss << this->temperature << " C\n";
    }
    return ss.str();
}

