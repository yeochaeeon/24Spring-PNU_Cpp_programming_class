//
// Created by codjs on 2024-05-21.
//
#include <iostream>
#include <string>

class Person{
public:
    Person(std::string name): name_(name){
    std::cout << "Person is constructed!" << std::endl;
    }
    void print(){
        std::cout << "Person Name: " << name_ << std::endl;
    }
    ~Person(){std::cout << "Person is destructed!" << std::endl;}

private:
    std::string name_;
};

class Student : public Person{
public:
    Student(std::string name, std::string college): Person(name), college_(college){
        std::cout << "Student is constructed!" << std::endl;

    }
    void print(){
        Person::print();
        std::cout << "School Name: "<< college_ << std::endl;
    }
    ~Student(){ std::cout << "Student is destructed!" << std::endl; }

private:
    std::string college_;
};
int main() {
    Person p1{"Park"};
    p1.print();

    Student s1 {"Kim", "PNU"};
    s1.print();

    return 0;
}

