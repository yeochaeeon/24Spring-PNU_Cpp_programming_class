//
// Created by codjs on 2024-05-06.
//
#include "patient.h"
#include <iomanip>
pPatient createPatient(std::string name, int age, int weight, float height){
    // PatientInfo 객체를 생성하고 스마트 포인터로 감싸서 반환 .
    std::unique_ptr<PatientInfo> p {new PatientInfo{name, age, weight, height, weight / (height * height )}};
    //return std::make_unique<PatientInfo>(PatientInfo{name, age, weight, height, date, weight / (height * height ) });
    return p;
}
void sortByBmi(PatientList& list, bool order) {
    if (order == 1){
        std::sort(list.begin(), list.end(),
                  [](const pPatient &a, const pPatient &b) { return a->bmi > b->bmi; });
    }
    else if (order == 0){
        std::sort(list.begin(), list.end(),
                  [](const pPatient &a, const pPatient &b) { return a->bmi < b->bmi; });
    }
} // return 값을 Patientlist 에서 void 로 바꿔줌 .. 도무지 어떻게 짜야할 지 모르겠어서
void printlist( PatientList& list){ //const 있 없의 차이가 대체 머지...
    std::for_each(list.begin(),list.end(),
                  [](const pPatient& i)
                  {std::cout << i->name <<" " << i->age << " " << i->weight<< " "
                  << std::fixed << std::setprecision(1)<< i->height <<" "
                  << std::fixed << std::setprecision(4)<< i->bmi << std::endl; });
}
pPatient searchByName(PatientList& list, std::string name){
    auto it = std::find_if(list.begin(),list.end(),[name](pPatient& i){return i-> name == name;});
if (it != list.end()) return std::make_unique<PatientInfo>(**it);
}
void overBmiList(PatientList& list, std::string opt, int level){
    PatientList NewList ;
    if (opt == ">") {
        std::for_each(list.begin(),list.end(),
                      [level,&NewList](pPatient& i ){
            if (i->bmi > level) { NewList.push_back(std::make_unique<PatientInfo>(*i)); }});
        std::for_each(NewList.begin(),NewList.end(),
                      [](const pPatient& i)
                      {std::cout << i->name <<" " << i->age << " " << i->weight<< " " << std::fixed << std::setprecision(1)<< i->height <<" " << std::fixed << std::setprecision(4)<< i->bmi << std::endl; });

    }
    else if (opt == "<") {
        std::for_each(list.begin(),list.end(),[level,&NewList](pPatient& i){
            if (i->bmi < level) { NewList.push_back(std::make_unique<PatientInfo>(*i)); }});
        std::for_each(NewList.begin(),NewList.end(),
                      [](const pPatient& i)
                      {std::cout << i->name <<" " << i->age << " " << i->weight<< " " << std::fixed << std::setprecision(1)<< i->height <<" " << std::fixed << std::setprecision(4)<< i->bmi << std::endl; });

    }

}// return 값을 Patientlist 에서 void 로 바꿔줌 .. 도무지 어떻게 짜야할 지 모르겠어서
void removeList(PatientList& list, std::string opt, int level) {
    if (opt == ">"){
        auto it = std::remove_if(list.begin(),list.end(),[level](pPatient& i ){return i->bmi > level;});
        list.erase(it, list.end());
    } // 얘도 return 값을 바꿔줌
    else if (opt == "<") {
        auto it = std::remove_if(list.begin(),list.end(),
                                 [level](pPatient& i){return i->bmi < level;});
        list.erase(it, list.end());
    }

}