#include <iostream>
#include <map>
#include <string>

int main(){
    int n;
    std::cin >> n ; 
    std::string name ;
    std::string phone_num;
    std::map<std::string, std::string> phonebook;

    for (int i = 0 ; i < n ; i++){
        std::cin >> name >> phone_num ;
        phonebook.insert({name,phone_num});
    }

    std::string who ;
    std::cin >> who ;
    while (who != "QUIT") {
    auto foundPerson = phonebook.find(who); 
    // find �Լ��� iterator�� ��ȯ�ϴµ� Ű ���� �������� ���� �� end()�� ��ȯ.
    // end()�� �Ǹ����� ���Ҹ� �Ѿ map�� ���� �������� ����Ŵ.

    if (foundPerson != phonebook.end()) {
        std::cout << foundPerson->second << std::endl;
    }
    
    else {
        std::cout << "NOT FOUND" << std::endl;
    }
    
    std::cin >> who ;

    }
}