#include "String.h"
#include <string.h>
#include <algorithm>

String::String(){
    s = new char[1];
    s[0] = '\0';
    std::cout << "##default" << std::endl;
}

String::String(const char* str){
    this->s = new char[strlen(str)+1] ;
    strcpy(s,str);
    std::cout << "##string" << std::endl;
}
String::String(const String& other){
    this->s = new char[other.size() + 1 ];
    strcpy(s, other.s);
    std::cout << "##copy" << std::endl;
} //copy constructor

String& String::operator=(const String& str){
    if (this != &str) { // 자기 자신에 대한 대입을 방지합니다.
        //delete[] s; // 현재 문자열을 삭제합니다.
        this->s = new char[str.size() + 1]; // 새로운 메모리를 할당합니다.
        strcpy(s, str.s); // 문자열을 복사합니다.
    }
    std::cout << "##Operator" << std::endl;
    return *this; // 자기 자신을 반환합니다.
} // copy assignment constructor

String::~String() {
    delete[] s;
}

const char* String::data() const {
    return s;
}

void String::print(const char* str) const {
    std::cout << str << ": " << s << ", " << "size: " << (*this).size() << std::endl;
}

char& String::at(size_t i){
    return s[i];
}

size_t String::size() const {
    return strlen(s);
}

void printString(const char* str) {
    std::cout << "printString" << ": " << str << ", "
              << "size: " << strlen(str) << std::endl;
}
