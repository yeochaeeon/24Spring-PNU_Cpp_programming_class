//
// Created by codjs on 2024-05-05.
//
#include<vector>
#include <memory>
#include <iostream>

struct PatientInfo {
    std::string name;
    int age;
    float weight;
    float height;
    int date;
    float bmi;
};

using PatientList = std::vector<std::unique_ptr<PatientInfo>>;
using pPatient = std::unique_ptr<PatientInfo>;