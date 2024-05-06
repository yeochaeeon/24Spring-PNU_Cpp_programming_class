//
// Created by codjs on 2024-05-06.
//
#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
struct PatientInfo{
    std::string name;
    int age;
    int weight;
    float height;
    float bmi;
};
//함수 선언밑 using 어쩌고
using pPatient = std::unique_ptr<PatientInfo>;
using PatientList = std::vector<pPatient>;

pPatient createPatient(std::string name, int age, int weight , float height);
void sortByBmi(PatientList& list, bool order);
pPatient searchByName(PatientList& list, std::string name);
void overBmiList(PatientList& list, std::string opt, int level);
void removeList(PatientList& list, std::string opt, int level);
void printlist(PatientList& list);
