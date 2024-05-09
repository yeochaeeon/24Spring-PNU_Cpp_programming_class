//
// Created by codjs on 2024-05-07.
//

#ifndef STRINGSPLITTER_H
#define STRINGSPLITTER_H
#include <iostream>
#include <vector>
class StringSplitter{
public:
    StringSplitter(std::string str);
    StringSplitter& trim();
    StringSplitter& replaceSubstring(std::string target, std::string sub);
    StringSplitter& removePunctuation();
    std::vector<std::string> split(char delim);

private:
    std::string string;
    std::vector<std::string> v;
};
#endif //C_PROGRAMMING_STRINGSPLITTER_H
