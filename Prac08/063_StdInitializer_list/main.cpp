#include <iostream>
#include <string>
#include <map>
#include <initializer_list>
#include <utility>

class Phonebook {
    std::map<std::string, int> contacts;
    public:
        Phonebook(std::initializer_list<std::pair<std::string, int>> lst){
        //������ ����
            for(auto i:lst) {
                contacts.insert(i);
            }

        }

        void print() const {
        //��� �Լ� ����
            for(auto i:contacts){
                std::cout << i.first << " " << i.second << std::endl;
            }
        }
};
int main() {
    Phonebook p = {{"Kim", 24},{"Lee", 21}};
    p.print();
    return 0;
}

//int main() {
//    Phonebook p = {{"Kim", 24},{"Lee", 21}};
//    p.print();
//    return 0;
//}
