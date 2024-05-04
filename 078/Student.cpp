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
Student Student::operator=(const Student& other) {

    this->id = other.id;
    this->name = other.name;
    this->grade = other.grade;
    return *this;
}
std::ostream& operator<<(std::ostream& os, const Student& student){
    return os << "id: " << student.id <<
}



