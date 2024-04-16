#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

class StringSplitter {

    //std::string data;

public:
    StringSplitter(std::string str): data(str){ };
    StringSplitter& trim();
    StringSplitter& removeNonAlnum();
    std::vector<std::string> split(char a);

private:
    std::string data;
    //std::vector<char> data;
};