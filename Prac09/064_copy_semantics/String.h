//
// Created by codjs on 2024-04-24.
//
#include <iostream>
#include <stddef.h>
class String {
public:
    String(); // default constructor
    String(const char* str); // copy constructor
    String(const String& str); // copy assignment operator
    String& operator=(const String& str);
    ~String();
    const char* data() const;
     char& at(size_t);//parameter 생략. type 만 적을 수 있음
    size_t size() const;
    void print(const char* str="") const;
private:
    void swap(String& str);
    int len;
    char* s;
};
