//
// Created by codjs on 2024-04-16.
//

#include "Person.h"

Person::Person(std::string t_name, std::string t_number){
    name = t_name;
    number = t_number;
}


void Person::modifyNumber(std::string t_number) {
    // your code here
    number = t_number;
}

void Person::print() const {
    // your code here
    std::cout << name << " " << number << std::endl;

}