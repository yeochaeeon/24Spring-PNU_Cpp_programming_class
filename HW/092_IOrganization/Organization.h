//
// Created by codjs on 2024-06-14.
//

#ifndef ORGANIZATION_H
#define ORGANIZATION_H
#include "IOrganization.h"
#include "Department.h"
#include <vector>

class Organization : public IOrganization {
public:

    Organization(const std::string orgName):orgName_(orgName){};
    void addDept(std::shared_ptr<Department> dept) override {
        departments.push_back(dept);
    }
    void setDeptManager(std::shared_ptr<Department> dept, std::shared_ptr<Manager> manager) override {
        (*dept).setManager(manager);
    }
    void addEmpToDept(std::shared_ptr<Department> dept, std::shared_ptr<Employee> employee) override {
        (*dept).addEmp(*employee);
    }
    void print() const override {
        std::cout << "Organization: " << orgName_ << std::endl;
        std::for_each(departments.begin(),departments.end(),[](auto dept){
            dept->print();
        });
    }
    bool moveEmp(sDept &from_dept, sDept &to_dept, sEmp emp) override {
        from_dept->removeEmp(emp.get());
        to_dept->addEmp(*(emp.get()));
        return true;
    }
    ~Organization() override {};
private:
    std::string orgName_;
    std::vector<std::shared_ptr<Department>> departments;

};
#endif //ORGANIZATION_H
