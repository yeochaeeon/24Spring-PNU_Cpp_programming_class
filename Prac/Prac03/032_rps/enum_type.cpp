#include <iostream>

int main(){
    enum Choice { ROCK, PAPER, SCISSORS };
    int player ;
    int computer ;
    std::cin >> player >> computer ;
    switch ( player ){
        case ROCK :
            std::cout << "You chose rock." << std::endl ;
            break;
        case PAPER :
            std::cout << "You chose paper." << std::endl ;
            break;
        case SCISSORS :
            std::cout << "You chose scissors." << std::endl ;
            break;
        default :
            std::cout << "Wrong Input." << std::endl ;
            break;
    }
    switch ( computer ){
        case ROCK :
            std::cout << "The computer chose rock." << std::endl ;
            break;
        case PAPER :
            std::cout << "The computer chose paper." << std::endl ;
            break;
        case SCISSORS :
            std::cout << "The computer chose scissors." << std::endl ;
            break;
        default :
            std::cout << "Wrong Input." << std::endl ;
            break;
    }

    if ( player == computer ) std::cout << "You tied!";
    else if ( player - computer == 1 || player - computer == -2 ) std::cout << "You won!";
    else std::cout << "The computer won!";
}