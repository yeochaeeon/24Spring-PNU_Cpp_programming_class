//
// Created by codjs on 2024-05-05.
//
#include "PatientInfo.h"
#include "algorithm"

pPatient create_patient(const std::string &name, int age, float weight, float height, int date);
void sort_patients(PatientList &patients) ;
std::vector<PatientInfo> find_patient(const PatientList &patients, const std::string &name);
int count_patients(const PatientList &patients, float threshold);
void remove_old_records(PatientList &patients,int date);
void print_patients(const PatientList &patients);