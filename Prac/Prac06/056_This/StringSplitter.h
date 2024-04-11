#include <iostream>
#include <vector>
#include <sstream>
#include <string>

class StringSplitter {

public:
    StringSplitter(std::string myString);
    StringSplitter& trim();
    StringSplitter& removeNonAlnum();
    std::vector<std::string> split(char a);

private:
    std::string myString;
    //std::string string;
    std::vector<char> data;
};