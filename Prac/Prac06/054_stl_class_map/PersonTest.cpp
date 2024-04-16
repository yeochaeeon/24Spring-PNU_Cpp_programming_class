//
// Created by codjs on 2024-04-16.
//
#include "Person.cpp"

enum choice{
    ADD, DEL, MOD, FIN, QUI
};

int main(){
    int N;
    std::cin >> N ;
    std::string t_name , t_number;
    std::map<std::string,Person> persons;
    std::pair<std::string,Person> data; // Person.cpp 나 .h 에서 꼭 인자 없는 생성자가 필요함 ..
    Person p; // Person.cpp 나 .h에서 꼭 인자 없는 생성자가 필요함..

    for (int i = 0 ; i < N ; i++){
        std::cin >> t_name >> t_number ;
        p = Person(t_name,t_number);
        data = {t_name,p};
        persons.insert(data);
    }

    enum choice c ;
    std::map<std::string, Person>::iterator find_it;
    std::string option;
    std::cin >> option ;

    while ( true ) {
        if (option == "ADD") c = ADD;
        else if (option == "DEL") c = DEL;
        else if (option == "MOD") c = MOD;
        else if (option == "FIN") c = FIN;
        else c = QUI ;
        switch (c) {

            case ADD :
                std::cin >> t_name >> t_number;
                //Person(t_name, t_number);
                data = {t_name,Person(t_name, t_number)};
                persons.insert(data);
                break;

            case DEL:
                std::cin >> t_name;
                find_it = std::find_if(persons.begin(),
                                       persons.end(),
                                       [t_name](auto &i)
                                       {return i.second.name == t_name;});

                persons.erase(find_it->first); // 인자 : 키값 또는 이터레이터.
                //persons.erase(find_it); 도 됨;
                break;

            case MOD:
                std::cin >> t_name >> t_number;
                find_it = std::find_if(persons.begin(),
                                       persons.end(),
                                       [t_name](std::pair<const std::string, Person> &i)
                                       {return i.second.name == t_name;});

                ((*find_it).second).modifyNumber(t_number);
                break;

            case FIN:
                std::cin >> t_name;
                find_it = std::find_if(persons.begin(),
                                       persons.end(),
                                       [t_name](std::pair<const std::string, Person> &i)
                                       {return i.second.name == t_name;});

                ((*find_it).second).print();
                break;

            case QUI:
                for (auto& i : persons){
                    i.second.print();
                }
                return 0;
        } // switch
        std::cin >> option;
    } // while
} // main