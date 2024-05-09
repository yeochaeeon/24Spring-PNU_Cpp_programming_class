//
// Created by codjs on 2024-04-16.
//

#include <iostream>
#include "Faculty.h"


class Department{
public:
    Department(){};
    Department(std::string dept, Faculty* faculty )
        :dept(dept), faculty(faculty){};

    Department(std::string dept): dept(dept),faculty(){};

    std::string getName(){ return dept;}

    void setFaculty(Faculty* faculty){
        this->faculty = faculty;
    }

    Faculty* getFac(){
        return faculty;
    }
private:
    std::string dept;
    Faculty* faculty;
};
