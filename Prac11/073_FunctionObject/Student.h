//
// Created by codjs on 2024-05-03.
//
#include <iostream>
#include <string>
#include <tuple>
enum GRADE {FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};
class Student {
public:
    Student(std::string name, GRADE grade) : name(name), grade(grade) {}

    friend std::ostream& operator << (std::ostream& os, const Student& s){
        os << s.grade << "ÇÐ³â, " << s.name;
        return os;
    }

    friend class Compare;
    // your code here
    class Compare{
    public:
        bool operator()(Student &lhs , Student &rhs){
            if (lhs.grade == rhs.grade ) return lhs.name < rhs.name;
            else return lhs.grade < rhs.grade ;
        }
    };

private:
    std::string name;
    GRADE grade;
};
