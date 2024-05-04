#include "String.h"
#include <algorithm>
#include <cstring>

String::String(){
    s = new char[1];
    s[0] = '\0';
    len = 0;
    std::cout << "##default" << std::endl;
}

String::String(const char* str){

    //this->len = sizeof(*str); // 이렇게 하면 첫문자의 size 만 반환됨..
    //this->len = 0;
    //while (str[len] != '\0') len++; // 걍 len = strlen(str) 쓰면 될 것을 ..
    this->len = strlen(str);
    this->s = new char[len+1] ;
    //strcpy(s,str);
    std::copy(str,str+len+1,this->s); // last 에 'len+1'으로 해주어야한다.
    std::cout << "##string" << std::endl;
}
String::String(const String& other){

    this->len = other.len;
    this->s = new char[len + 1];
    std::copy(other.s, other.s+len+1,this->s);// last 에 'len+1'으로 해주어야한다.
    std::cout << "##copy" << std::endl;
} //copy constructor

String& String::operator=(const String& other){
    if (this != &other) { // 자기 자신에 대한 대입방지
        //delete[] s; // 현재 문자열 삭제
        this-> len = other.len;
        this->s = new char[len + 1]; // 새로운 메모리할당
        std::copy(other.s,other.s+len+1,this->s); // last 에 'len+1'으로 해주어야한다.
        // copy 두번째 인자는 마지막원소의 바로 다음을 가리켜야 함.
        // 문자열 복사.
    }
    std::cout << "##Operator" << std::endl;
    return *this; // 자기 자신 반환
} // copy assignment constructor

String::~String() {
    delete[] s;
}

const char* String::data() const {
    return s;
}

void String::print(const char* str) const {
    std::cout << str << ": " << this->s << ", " << "size: " << this->size() << std::endl;
}

char& String::at(size_t i){
    return s[i];
}

size_t String::size() const {
    return len;
    //return sizeof(*s); //이렇게 하면 무조건 1나옴 .그래서 틀림 ..
}

void printString(const char* str) {
    std::cout << "printString" << ": " << str << ", "
              << "size: " << strlen(str) << std::endl;
}