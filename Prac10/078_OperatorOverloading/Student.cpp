//
// Created by codjs on 2024-05-02.
//
#include "Student.h"
Student::Student(){};
Student::Student(int id, std::string name, int grade){
    this->id = id;
    this->name = name;
    this->grade = grade;
}

std::ostream& operator<<(std::ostream& os, const Student& student){
    return os << "id: " << student.id << " "
    << "Name: " << student.name << " "
    << "Grade: " << student.grade ;
}

bool compareByGrade(const Student &a, const Student &b){
    return a.grade > b.grade ;
}

bool Student::operator<(const Student &student) {
    return this->name < student.name;
}