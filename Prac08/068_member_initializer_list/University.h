#include <iostream>
#include <algorithm>
#include "Department.h"

class University{

public:
    University(std::string univ, int ndepts)
    : univ(univ),ndepts(ndepts){
        depts = new Department[ndepts];
    };
    void setDepartments(Department* dept){
        std::copy(dept,dept+ndepts,depts);
    }
    void printInfo(){
        std::cout << "University Name: " << univ << std::endl;
        std::cout << "Number of Departments: " << depts << std::endl;
        std::cout << std::endl;
        std::for_each(depts,depts+ndepts,[](Department& i)
        {
            std::cout << "Department Name: " << i.getName() << std::endl ;
            if (i.getFac() == nullptr) {
                std::cout << "Faculty Name: " << "N/A" << std::endl;
                std::cout << "Number of Faculty Members: " << "N/A" << std::endl;
                std::cout << std::endl;
            }
            else {
                std::cout << "Faculty Name: " << i.getFac()->getMajor() << std::endl;
                std::cout << "Number of Faculty Members: " << i.getFac()->getMembers() << std::endl;
                std::cout << std::endl;
            }
        });
    }
private:
    int ndepts;
    std::string univ;
    //std::vector<Department> depart;
    Department* depts;
};