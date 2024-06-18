//
// Created by codjs on 2024-06-14.
//

#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>
#include <memory>
#include <vector>
#include "Manager.h"
#include "Employee.h"
#include <algorithm>
class Department {
public:
    Department(std::string name):deptName_(name){};

    void setManager(std::shared_ptr<Manager> manager){
        manager_ = *manager;
    }
    void addEmp(Employee p){
        employees.push_back(p);
    }
    void removeEmp(Employee* p){
        employees.erase(std::remove(employees.begin(),employees.end(),*p),employees.end());
    }
    void print(){
        std::sort(employees.begin(),employees.end(),[](auto emp1, auto emp2)
        {return emp1.getID() < emp2.getID();});
        std::cout << deptName_ << std::endl;
        std::cout <<"\t|---Manager: " << manager_.getName() << " "
        << manager_.getID() << " "
        << manager_.getSalary() << std::endl;
        std::for_each (employees.begin(),employees.end(),[](auto emp){
            emp.print();
        });
    }
private:
    std::string deptName_;
    Manager manager_;
    std::vector<Employee> employees;
};
#endif //DEPARTMENT_H
