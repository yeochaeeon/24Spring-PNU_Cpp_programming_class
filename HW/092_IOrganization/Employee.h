//
// Created by codjs on 2024-06-14.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

class Employee {


public:
    Employee(){};
    Employee(std::string name, int sal): name(name),salary(sal){
        id= cnt++;
    };
    int getID(){
        return id;
    }
    void print(){
        std::cout << "\t|---" << name << " " << id << " " << salary << std::endl;
    }
    bool operator==(const Employee& other) const {
        return id == other.id; // ID로 비교
    }

protected:
    int id ;
    std::string name;
    int salary;
    static int cnt ;
};
int Employee::cnt = 1;
#endif //EMPLOYEE_H
