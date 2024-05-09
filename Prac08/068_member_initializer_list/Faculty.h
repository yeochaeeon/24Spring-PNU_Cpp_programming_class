//
// Created by codjs on 2024-04-16.
//
#include <iostream>

class Faculty{
public:
    Faculty(std::string major, int members):major(major), members(members) {};
    //Faculty():major("N/A"),members(0){}
    //Faculty(){};
    int getMembers() { return members; }
    std::string getMajor(){ return major; }

private:
    std::string major;
    int members ;
};

