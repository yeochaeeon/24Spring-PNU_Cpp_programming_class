#include <iostream>
#include <vector>
#include <algorithm>
#include "Department.h"

class University{

public:
    University(std::string univ, int depts)
    : univ(univ),depts(depts){};
    void setDepartments(Department* dept){
        depart.insert(depart.end(),dept,dept+depts);

    }
    void printInfo(){
        std::cout << "University Name: " << univ << std::endl;
        std::cout << "Number of Departments: " << depts << std::endl;
        std::cout << std::endl;
        std::for_each(depart.begin(),depart.end(),[](Department& i)
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
    int depts;
    std::string univ;
    std::vector<Department> depart;
};