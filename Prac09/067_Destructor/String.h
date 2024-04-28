//
// Created by codjs on 2024-04-24.
//
#include <iostream>
#include <cstring>
class String{
    public:
        String();
        String(const char* str);
        String(const String& other);
        ~String() ;
        void print(const char* msg);
        char& at(size_t i);
    private:
        char* str;
        int len;
};
