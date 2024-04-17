#include <iostream>
#include <vector>
#include <algorithm>

struct Item{

    std::string name;
    double price;
    int quantity;

};

int main(){
    std::vector<Item> inventory = {
            {"Apple", 0.99, 10},

            {"Banana", 0.59, 20},

            {"Cherry", 1.49, 5},

            {"Dates", 2.99, 2},

            {"Elderberry", 3.99, 0},

            {"Fig", 2.49, 15},

            {"Grape", 0.79, 25},

            {"Honeydew", 1.29, 8},

            {"Indian Gooseberry", 2.99, 0},

            {"Jackfruit", 4.99, 1}
    };

    // implement your code
    // ## 가격을 오름차순으로 정렬 & print
    std::sort(inventory.begin(),inventory.end(),[](Item& a, Item& b){ return a.price < b.price;});
    std::for_each(inventory.begin(),inventory.end(),[](Item& i){std::cout << i.name << " " << i.price << " " << i.quantity <<std::endl;});

    // ## find item with its name
    // find_if 함수는 이터레이터를 반환함
    auto search_iter= std::find_if(inventory.begin(),
                                   inventory.end(),
                                   [](Item& a){ return a.name == "Grape";});
    std::cout << "Item found: " << (*search_iter).name << " " << (*search_iter).price << " " << (*search_iter).quantity << std::endl;
    //iterator는 인덱스가 아니다 . (*이터레이터)로 쓰자.


    // ## Print number of products priced more than 2dollors
    // count_if -> 개수 출력 ~!
    auto count = std::count_if(inventory.begin(),
                               inventory.end(),
                               [](Item& a){return a.price >= 2;});
    std::cout << "Number of expensive items: " << count << std::endl;


    // ## Delete if ( quantity == 0 )
    auto last = std::remove_if(inventory.begin(),
                               inventory.end(),
                               [](Item& a){return a.quantity == 0;});

    inventory.erase(last,inventory.end());

    // Print all inventory
    std::for_each(inventory.begin(),
                  inventory.end(),
                  [](Item& i){std::cout << i.name << " " << i.price << " " << i.quantity <<std::endl;});
}



