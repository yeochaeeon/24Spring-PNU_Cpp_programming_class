#include <iostream>
#include <map>


void addItem(std::map<std::string, int>& inventory, std::string item, int count) { 

    inventory[item] += count; 

}

void addItem(std::map<std::string,int>& inventory, std::string item, float money){
    //your code here
    inventory[item] += 1 ;
    inventory["MONEY"] += money; // 머니 key 값 생성
}

int main(){

    std::map<std::string, int> inventory;

    addItem(inventory, "sword", 1);
    addItem(inventory, "shield", 2);
    addItem(inventory, "shield", 5.0F);
    addItem(inventory, "armor", 3.0F); 
    // money가 제일 마지막에 들어갔는데 왜 map 돌 때 맨첨에 나올까 ? 

    for (const auto &[key, value] : inventory)
        std::cout << key << " " << value << std::endl;
}
