#include "StringSplitter.h"

StringSplitter& StringSplitter::trim(){

}

StringSplitter& StringSplitter::removeNonAlnum(){
    data.erase(remove_if( , , ),data.end()); // skeletion code

}

// Hello World
std::vector<std::string>
