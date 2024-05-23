//
// Created by codjs on 2024-05-09.
//
#include "String.h"
#include <cstring>
int String::count_ = 0;
// class 의  static 변수는 전엯에서
// 이러한 방식으로 초기화를 해주어야 한다.
String::String(){
    len_ = 0;
    data_ = new char[1]{'\0'};
    std::cout << "Default constructor" << std::endl;
    count_++;
    std::cout << "# of string object: " << count_ << std::endl;

}
String::~String(){
    count_--;
    std::cout << "Destructor" << std::endl;
    delete[] data_ ;
    std::cout << "# of String object: " << count_ << std::endl;
}
String::String(const char *s) {
    len_ = strlen(s);
    data_ = new char[len_];
    //data_ = s -> 안된다.
    // 왜?? s 가 const char 이라서 .
    std::copy(s,s+len_+1,data_);
    std::cout << "Constructor" << std::endl;
    count_++;
    std::cout << "# of String object: " << count_ << std::endl;
}
String::String(const String& s) noexcept{
    len_ = s.len_;
    data_ = new char[len_];
    std::copy(s.data_,s.data_+len_+1,data_);
    std::cout << "Copy Constructor" << std::endl;
    count_++;
    std::cout << "# of String object: " << count_<< std::endl;
}
const char* String::data() const {
    return this->data_;
}

size_t String::size() const {
    return this->len_;
}

bool String::empty() const {
    if (len_ == 0) return true;
    else return false;
}
String& String::append(const String& str){
    size_t other_len = str.len_;
    for (int i = 0; i < other_len; ++i) {
        data_[len_ + i] = str.data_[i];
    }
    data_[len_ + other_len] = '\0'; // Null-terminate the combined string
    len_ += other_len;
    return *this;
} // 이게 왜 되지...
String& String::append(const char *str) {
    int other_len = strlen(str);
    std::copy(str,str+other_len+1,data_+len_);
    return *this;
}
