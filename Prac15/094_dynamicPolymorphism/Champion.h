//
// Created by codjs on 2024-05-21.
//

#ifndef CHAMPION_H
#define CHAMPION_H
#include <iostream>
#include <memory>
#include "GangplankSkill.h"
#include "EzrealSkill.h"

enum class CHAMPION {GANGPLANK, EZREAL};
class Champion {
public:
    void select_champion(CHAMPION champion){
        switch(champion){
            case CHAMPION::GANGPLANK:
                skill = std::make_unique<GangplankSkill>();
                break;
            case CHAMPION::EZREAL:
                skill = std::make_unique<EzrealSkill>();
        }
    }
    void q() { skill->q(); }
    void w() { skill->w(); }
    void e() { skill->e(); }
    void r() { skill->r(); }
private:
    std::unique_ptr<Skill> skill;
};
#endif //C_PROGRAMMING_CHAMPION_H
