//
// Created by codjs on 2024-06-13.
//
#include <iostream>
#include "Student.h"
int main()

{

    Student s1{"Kim", 2};
    Student s2{"Park", 3};

    auto s3 = my_make_unique<Student>("Lee", 4);

    std::cout<< s1 << std::endl;
    std::cout<< s2 << std::endl;
    std::cout<< *s3 << std::endl;

    return 0;

}



