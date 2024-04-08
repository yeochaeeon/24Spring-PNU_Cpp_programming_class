#include <iostream>
#include <vector>
#include <memory> // unique_ptr 쓰려면 무조건 넣어줘야하는 memory

struct STUDENT {
    std::string name;
    int age;
};

void printStudentInfo(const STUDENT& student){
    std::cout << student.name << " " << student.age << std::endl;
}

std::unique_ptr<STUDENT> createStudent (std::string name, int age) {

    auto student = std::unique_ptr<STUDENT> (new STUDENT());
    student->name = name;
    student->age = age;
    return student;

}

int main() {

    int n;
    std::cin >> n ;
    std::string name ;
    int age ; 
    std::vector<STUDENT> student_list ;
    std::unique_ptr<STUDENT> student_ptr;

    for  (int i = 0; i < n ; i++) {

        std::cin >> name >> age ;
        student_ptr = createStudent(name, age);
        student_list.push_back(*student_ptr);

    }
    for (int i = 0; i < n ; i++) {

        printStudentInfo(student_list[i]);

    }
}