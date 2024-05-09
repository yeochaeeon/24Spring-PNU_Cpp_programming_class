//
// Created by codjs on 2024-05-07.
//
#include "StringSplitter.h"
#include <string> //find(), erase()
#include <algorithm> // remove_if()
#include <sstream> // string stream
StringSplitter::StringSplitter(std::string str) : string(str){};

StringSplitter& StringSplitter::trim(){
    auto first = string.find_first_not_of(' ');
    string.erase(string.begin(),string.begin()+first);

    auto last = string.find_last_not_of(' ');
    string.erase(string.begin()+last, string.end());

    return *this;
}

StringSplitter& StringSplitter::replaceSubstring(std::string target, std::string sub){

    string.replace(string.find(target),target.length(),sub);
    return *this;
}

StringSplitter& StringSplitter::removePunctuation(){

    string.erase(std::remove_if(string.begin(),string.end(),[](char i)
    { return (!(isalnum(i)) && !(isspace(i)));
    }),string.end());

    return *this;
}
std::vector<std::string> StringSplitter::split(char delim){

    std::vector<std::string> result;
    std::stringstream ss(string);
    std::string tmp;
    while(std::getline(ss,tmp,delim)){
        result.push_back(tmp);
    }
    return result;
}
