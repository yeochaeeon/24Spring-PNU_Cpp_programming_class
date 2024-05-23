//
// Created by codjs on 2024-05-21.
//

#ifndef GANGPLANKSKILL_H
#define GANGPLANKSKILL_H
#include "Skill.h"

class GangplankSkill : public Skill {
    void q() override {
        std::cout << "TRIAL BY FIRE" << std::endl;
    }
    void w() override {
        std::cout << "PARRRLEY" << std::endl;
    }
    void e() override {
        std::cout << "REMOVE SCURVY" << std::endl;
    }
    void r() override {
        std::cout << "POWDER KEG" << std::endl;
    }
};

#endif //C_PROGRAMMING_GANGPLANKSKILL_H
