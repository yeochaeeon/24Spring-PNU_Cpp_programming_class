#include <iostream>
#include <vector>
#include "Department.h"

class University{

public:
    University(std::string univ, int depts)
    : univ(univ),depts(depts){};
    void setDepartments(Department* dept){
        for(int i = 0 ; i < depts ; i++){
            depart.push_back(dept[i]);
        }
    }
    void printInfo(){
        std::cout << "University Name: " << univ << std::endl;
        std::cout << "Number of Departments: " << depts << std::endl;
        std::cout << std::endl;

        for (int i = 0 ; i < depts ; i++){
            std::cout << "Department Name: " << depart[i].getName() << std::endl ;
            if (depart[i].getFac() == nullptr) {
                std::cout << "Faculty Name: " << "N/A" << std::endl;
                std::cout << "Number of Faculty Members: " << "N/A" << std::endl;
                std::cout << std::endl;
            }
            else {
                std::cout << "Faculty Name: " << depart[i].getFac()->getMajor() << std::endl;
                std::cout << "Number of Faculty Members: " << depart[i].getFac()->getMembers() << std::endl;
                std::cout << std::endl;
            }
        }
    }
private:
    int depts;
    std::string univ;
    std::vector<Department> depart;
};