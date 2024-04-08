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
    // find 함수는 iterator를 반환하는데 키 값이 존재하지 않을 시 end()를 반환.
    // end()는 맨마지막 원소를 넘어선 map의 가장 마지막을 가리킴.

    if (foundPerson != phonebook.end()) {
        std::cout << foundPerson->second << std::endl;
    }
    
    else {
        std::cout << "NOT FOUND" << std::endl;
    }
    
    std::cin >> who ;

    }
}