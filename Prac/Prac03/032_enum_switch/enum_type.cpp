#include <iostream>

int main(){
    enum Color { RED, GREEN ,BLUE };

    //enum Color color;

    int num;

    std::cin >> num;
    
    switch ( num ){
        case RED:
            std::cout << "It's red light!" << std::endl;
            break;
        case GREEN:
            std::cout << "It's green light!" << std::endl;
            break;
        case BLUE:
            std::cout << "It's blue light!" << std::endl;
            break;
        default :
            std::cout << "what's this?" << num <<std::endl;
    }

}