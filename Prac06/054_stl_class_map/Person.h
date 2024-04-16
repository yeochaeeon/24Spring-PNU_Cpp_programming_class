//
// Created by codjs on 2024-04-16.
//
#include <iostream>
#include <map>
#include <algorithm>

class Person {

public:

    Person(){};
    Person(std::string t_name, std::string t_number);

    void modifyNumber(std::string t_number);
    void print() const;

    //std::map<std::string ,Person> persons;
    std::string number;
    std::string name;

private:
    // your code here
//    std::string name;
//    std::string number;
};