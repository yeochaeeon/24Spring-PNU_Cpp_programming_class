//
// Created by codjs on 2024-05-06.
//
#include "patient.cpp"
int main(){
    int n ;
    std::cin >> n;
    PatientList list;

    for (int i = 0; i < n ; i++){
        std::string name ;
        int age, weight ;
        float height;
        std::cin >> name >> age >> weight >> height ;
        list.push_back(createPatient(name,age,weight,height));
    }
    //std::cout << "## list complete!" << std::endl;
    std::string func, opt;
    std::cin >> func >> opt;
    if (func == "sort:") {
        bool order ;
        if (opt == "desc") {
            order = 1;
            sortByBmi(list,order);
            std::cout << "Sorted by BMI (descending):" << std::endl;
            printlist(list);
        }
        else {
            order = 0;
            sortByBmi(list, order);
            std::cout << "Sorted by BMI (ascending):" << std::endl;
            printlist(list);
        }
    }
    std::cout << std::endl;

    std::cin >> func >> opt ;
    if (func == "search:") {
        std::cout << "Search Results for:" << std::endl;
        pPatient p = searchByName(list,opt);
        std::cout << p->name << " " << p->age << " "
        << p->weight << " " << std::fixed << std::setprecision(1)<< p->height << " "
                              << std::fixed << std::setprecision(4)<< p->bmi << std::endl;
    }

    std::cout << std::endl;
    int level;
    std::cin >> func >> opt >> level;

    if ( func == "list:") {
        std::cout << "Patients with BMI " << opt << " :" << std::endl;
        overBmiList(list, opt, level); //filter and print
    }
    std::cout << std::endl;
    std::cin >> func >> opt >> level;
    if ( func == "remove:") {
        std::cout << "Remaining Patients after Removal:" << std::endl ;
        removeList(list,opt,level);//remove and print
        printlist(list);
    }
    return 0;

}