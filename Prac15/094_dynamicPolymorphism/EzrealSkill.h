//
// Created by codjs on 2024-05-21.
//

#ifndef EZREALSKILL_H
#define EZREALSKILL_H

#include "Skill.h"
class EzrealSkill : public Skill {

    void q() override {
        std::cout << "RISING SPELL FORCE" << std::endl;
    }
    void w() override {
        std::cout << "MYSTIC SHOT" << std::endl;
    }
    void e() override {
        std::cout << "ESSENCE FLUX" << std::endl;
    }
    void r() override {
        std::cout << "ARCANE SHIFT" << std::endl;
    }
};
#endif //C_PROGRAMMING_EZREALSKILL_H
