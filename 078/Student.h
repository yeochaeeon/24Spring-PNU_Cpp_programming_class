//
// Created by codjs on 2024-05-02.
//
#include <iostream>
class Student {
public:
    Student();
    Student(int id,std::string name,int grade);
    Student operator=(const Student& other);
    friend std::ostream& operator<<(std::ostream os, const Student& student);
private:
    int id;
    std::string name;
    int grade;
};

std::ostream& operator<<(std::ostream os, const Student& student);
