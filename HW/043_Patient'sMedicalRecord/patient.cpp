//
// Created by codjs on 2024-05-05.
//
#include "patient.h"
pPatient create_patient(const std::string &name, int age, float weight, float height, int date){
    // PatientInfo 객체를 생성하고 스마트 포인터로 감싸서 반환 .
    return std::make_unique<PatientInfo>(PatientInfo{name, age, weight, height, date, weight / (height * height)});
}
void sort_patients(PatientList &patients) {
    //implement your code
    std::sort(patients.begin(),patients.end(),[](pPatient& a, pPatient& b )
    {return  a->bmi > b->bmi ; });

}
std::vector<PatientInfo> find_patient(const PatientList &patients, const std::string &name){
    //implement your code
    std::vector<PatientInfo> found_list ;
    std::for_each(patients.begin(),patients.end(),
                               [name, &found_list](const pPatient& i){if (i->name == name) found_list.push_back(*i);});
    // const 랑 & 주의하기 !!
    return found_list;
}
int count_patients(const PatientList &patients, float threshold){
    //implement your code
    int n = count_if(patients.begin(),patients.end(),
                     [threshold](const pPatient& i){return i->bmi > threshold;});
    return n;
}
void remove_old_records(PatientList &patients, int date){
    //implement your code
    auto last = remove_if(patients.begin(),patients.end(),
                          [date](const pPatient& i ){return i->date < date;});
    patients.erase(last,patients.end());
}
void print_patients(const PatientList &patients){
    //implement your code
    std::cout << std::fixed ;
    std::cout.precision(2);

    std::for_each(patients.begin(), patients.end(),[](const pPatient& i){
        std::cout << i->name << " " << i->age << " " << i->weight << " "
        << i-> height << " " << i->date << " " << i->bmi << std::endl;
    });
}