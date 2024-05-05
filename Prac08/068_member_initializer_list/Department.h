//
// Created by codjs on 2024-04-16.
//

#include <iostream>
#include "Faculty.h"
#include <vector>

class Department{
public:
    Department(){};
    Department(std::string dept, Faculty* faculty )
        :dept(dept), fac(faculty){};

    Department(const std::string& deptName)
        : dept(deptName), fac(nullptr) {};

    std::string getName(){ return dept; }

    void setFaculty(Faculty* faculty){
        fac = faculty;
    }

    Faculty* getFac(){
        return fac;
    }
private:
    std::string dept;
    Faculty* fac;
};
