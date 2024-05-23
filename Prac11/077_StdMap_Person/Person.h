//
// Created by codjs on 2024-05-04.
//
#include <iostream>

//static size_t fisrtID;
size_t firstID= 1 ;
//size_t왜 썼더라

class Person {
public:

    Person(std::string name, size_t age) : name{name}, age{age} {
        // set ID with uniqueness
        ID = firstID++;
    }

//    friend std::ostream& operator << (std::ostream& out, const Person& p) {
//        // implementation
//        return out << p.ID << " " << p.name << " " << p.age ;
//    }
    friend std::ostream& operator << (std::ostream& os , const Person& p){
        return os << p.ID << " " << p.name << " " << p.age ;
    }

    bool operator < (const Person& rhs) const {
        // implementation
        return this->ID < rhs.ID ;
    }

    class ComparatorByAge {
    public:
        bool operator()(const Person& lhs, const Person& rhs) const{
            // implementation
            return lhs.age < rhs.age;

        }
    };

    class ComparatorByName {
    public:
        // implementation
        bool operator()(const Person& lhs, const Person& rhs) const {
            return lhs.name < rhs.name ;
        }
    };

private:
    long long ID;
    std::string name;
    size_t age;
};