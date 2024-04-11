#include "StringSplitter.h"

StringSplitter::StringSplitter(std::string myString) : myString(myString){};

StringSplitter& StringSplitter::trim(){
    data.erase(0,data.find_first_not_of(" "));
}

StringSplitter& StringSplitter::removeNonAlnum(){
    data.erase(remove_if( , , ),data.end()); // skeletion code

}

// Hello World
std::vector<std::string> StringSplitter::split(char a){
    std::vector<std::string> ret;

    std::stringstream ss(data);
}
