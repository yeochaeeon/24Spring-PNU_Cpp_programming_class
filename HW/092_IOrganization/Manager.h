//
// Created by codjs on 2024-06-14.
//

#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include <iostream>
class Manager : public Employee{
public:
    Manager(){};
    Manager(std::string name, int sal){
        managerName_ =name;
        salary = sal;
        id = Employee::cnt++;}
    std::string getName(){
        return managerName_;
    }
    int getSalary(){
        return salary;
    }
    int getID(){
        return id;
    }
protected:
    std::string managerName_;
    int salary;
    int id;

};
#endif //MANAGER_H
