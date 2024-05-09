//
// Created by codjs on 2024-05-07.
//
#include <map>
#include <iostream>
#include <vector>
#ifndef SHAREDPREFERENCES_H
#define SHAREDPREFERENCES_H
class SharedPreferences;
class SharedPreferences {
private:
    std::map<std::string, int> preferences;
    SharedPreferences()= default;
    ~SharedPreferences()= default;
    SharedPreferences(const SharedPreferences&)= delete;
    SharedPreferences& operator=(const SharedPreferences&)= delete;
    friend class std::vector<SharedPreferences*>;
public:
    static SharedPreferences& getInstance();
    void putInt(std::string key, int value);
    int getInt(std::string key);
    size_t size();
};
#endif //C_PROGRAMMING_SHAREDPREFERENCES_H
