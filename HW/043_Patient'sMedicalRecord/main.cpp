//
// Created by codjs on 2024-05-05.
//
#include "patient.cpp"
enum class Command {
    CREATE,
    SORT,
    FIND,
    COUNT,
    REMOVE,
    EXIT
};

Command get_command(const std::string &command_str) {

    if (command_str == "CREATE") return Command::CREATE;
    if (command_str == "SORT") return Command::SORT;
    if (command_str == "FIND") return Command::FIND;
    if (command_str == "COUNT") return Command::COUNT;
    if (command_str == "REMOVE") return Command::REMOVE;

    return Command::EXIT;

}
int main() {

    PatientList patients;
    std::string command_str;
    Command command;

    while (std::cin >> command_str) {
        command = get_command(command_str);
        if (command == Command::EXIT) {
            break;
        }
        //implement your code
        else if (command == Command::CREATE){

            std::string name ;
            int age;
            float weight;
            float height;
            int date;

            //std::cout << "Entered to create mode" << std::endl;
            std::cin >> name >> age >> weight >> height >> date ;
            patients.push_back(create_patient(name,age,weight,height,date));
        }
        else if (command == Command::SORT ){
            sort_patients(patients);
            print_patients(patients);
        }
        else if (command == Command::FIND) {
            std::string search;
            std::cin >> search;
            std::vector<PatientInfo> found = find_patient(patients, search);
            if (found.size() == 0) std::cout << "Patient not found" << std::endl;
            else
                std::for_each(found.begin(), found.end(),
                              [](PatientInfo &i) {
                                  std::cout << i.name << " " << i.age << " " << i.weight << " "
                                            << i.height << " " << i.date << " " << i.weight / (i.height) * (i.height)
                                            << std::endl;
                              });
        }
        else if (command == Command::COUNT) {
            float threshold;
            std::cin >> threshold;
            int cnt = count_patients(patients,threshold);
            std::cout << cnt << " patients with BMI greater than " << threshold << std::endl;
        }
        else if (command == Command::REMOVE) {
            int date;
            std::cin >> date;
            remove_old_records(patients,date);
            print_patients(patients);
        }
    }
    return 0;
}