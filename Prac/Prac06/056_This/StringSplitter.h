#include <iostream>

class StringSplitter {

public:
    StringSplitter(std::string myString) : myString(myString){};
    StringSplitter& trim();
    StringSplitter& removeNonAlnum();
    StringSplitter& split(char word);


private:
    //std::string myString;
};