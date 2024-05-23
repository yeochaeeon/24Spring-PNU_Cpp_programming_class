//
// Created by codjs on 2024-05-21.
//
#include <algorithm>
#include <map>
#include "Champion.h"


CHAMPION getChampion(){
    std::map<std::string, CHAMPION> cmds = {
            {"gangplank", CHAMPION::GANGPLANK},
            {"ezreal", CHAMPION::EZREAL}
    };
    while(true) {
        std::string champion;
        std::cin >> champion;
        transform(begin(champion), end(champion), begin(champion),
                  [](auto &c) { return tolower(c); });
        auto found = cmds.find(champion);
        if (found != end(cmds))
            return found->second;
    }
}

enum class COMMAND {SELECT, QUIT};
COMMAND getCommand() {
    std::string cmd;
    std::cin >> cmd;
    if (cmd == "select")
        return COMMAND::SELECT;
    else if (cmd == "quit")
        return COMMAND::QUIT;
}
int main() {
    COMMAND cmd;
    while((cmd=getCommand())!=COMMAND::QUIT) {
        switch (cmd){
            case COMMAND::SELECT: {
                Champion c;
                c.select_champion(getChampion());
                c.q(); c.w(); c.e(); c.r();
                break;
            }
        }
    }
    return 0;
}