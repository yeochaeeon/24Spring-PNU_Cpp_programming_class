//
// Created by codjs on 2024-05-21.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    Employee(string name, int salary) : name_(name), salary_(salary) {}
    virtual void print_report() const {
        cout << "Name: " << name_ << endl;
        cout << "Salary: " << salary_ << endl;
        cout << "Years of service: " << years_of_service_ << endl;
        cout << "Performance score: " << performance_score_ << endl;
    }
//    string get_name() const {
//        return name_;
//    }
protected: // 자식클래스 만 접근이 가능한 멤버변수 및 메소드들
    string name_;
    int salary_;
    int years_of_service_ = 0;
    int performance_score_ = 0;
};
class Manager: public Employee {
public:
    Manager(string name, int salary, string dept)
    : Employee(name,salary),dept_(dept){};
    void print_report() const override {
        Employee::print_report();
        cout << "Department: " << dept_ << endl;
    }
    void set_goals(){
        cout << "Set goals for " << dept_ << std::endl;
    }

private:
    string dept_;
};

class Programmer : public Employee{
public:
    Programmer(string name, int salary, string lang) :
            Employee(name,salary), lang_(lang){
        performance_score_ = 10;
    };
    void print_report() const override{
        Employee::print_report();
        cout << "Language: " << lang_ << endl;
    }
    void write_code(){
        cout << "Writing code in "<< lang_ << std::endl;
    }

private:
    string lang_;
};

class Salesperson : public Employee {
public:
    Salesperson(string name, int salary, int sales ) :
            Employee(name,salary), sales_(sales) {
        performance_score_ = 20;
    };
    void print_report() const override{
        Employee::print_report();
        cout << "Sales: " << sales_ << endl;
    }

    void sell(){
        std::cout << "Selling products, generated " << sales_ << " in revenue" << std::endl;
    }

private:
    int sales_;
};
#endif //C_PROGRAMMING_EMPLOYEE_H
