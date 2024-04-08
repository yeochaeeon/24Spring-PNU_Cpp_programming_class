#include "Temperature.h"

// implement your code

// Temperature::Temperature( double temp, SCALE scale )
// {
//     temperature = temp;
//     Temperature scale = scale; // ���� ������ �տ� ��ü �̸� �ٿ�����ϴ���..
// }

Temperature::Temperature(double temp, SCALE scale) : temperature(temp), scale(scale) { } ; 


void Temperature::convertToFahrenheit() {
   this->temperature = this->temperature * 9/5 + 32 ;
   this->scale = FAHRENHEIT; // �����ϵ� �ٲ���� �� .. 
   
}

void Temperature::convertToCelsius() { 
    this->temperature = (this->temperature - 32) * 5 / 9 ;
    this->scale = CELSIUS; // �����ϵ� �ٲ������ ..
    
}

Temperature Temperature::add(Temperature other) {
    if ( other.scale != this-> scale ){ //other �� �ڿ� . ��!
        if (other.scale == CELSIUS) {
            other.convertToFahrenheit();
            
        }
        else {
            other.convertToCelsius();
            
        }
        // �� �ȿ� ������ ������ ��ϳ� !!!      
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

