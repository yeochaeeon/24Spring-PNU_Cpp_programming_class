#include <iostream> 
#include <vector>

struct Item {
    int id;
    std::string name;
    int quantity;
    int price;
};

//std::vector<Item*> items;

int main(){
    
    int item_count = 0; 
    Item* cart = nullptr;  //변수를 case 밖에서 선언하고 초기화 
    std::vector<Item*> items; 
    //구조체 벡터 선언할 때 타입에는 구조체의 이름 넣기
    //처음에 이 벡터를 while 문 안에 선언해서 계속 logic 에러가 뜸 ..
    //새로운 choice 를 할 때 마다 벡터가 초기화 돼서 case 3 에서 
    //자꾸 빈 벡터에 접근하려니까 원소가 없어서 아무것도 안뜨고 종료됨
    int item_number ;
    int choice = 1;

    while (1){
        

        std::cin >> choice ;
        int erase = 0;
        int total_price = 0 ;
         

        switch (choice) {

            case 1:
            cart = new Item; //밖에서 cart 선언.
            cart->id = item_count;
            std::cout << "Enter item name: " ;
            std::cin >> cart->name ;
            std::cout << "Enter item quantity: " ;
            std::cin >> cart->quantity;
            std::cout << "Enter item price: " << std::endl ;
            std::cin >> cart->price ;
            items.push_back(cart);
            item_count++;
            std::cout << "Item " << cart->id << " added successfully." << std::endl;
            break;

            case 2:
            std::cout << "Enter item ID: "<<std::endl; 
            std::cin >> erase;
            
            for (int i = 0; i < item_count;i++){
                if(erase == items[i]->id){
                    delete items[i];
                }
            }
            item_count--;
            std::cout << "Item deleted successfully." << std::endl;
            break;

            case 3:
            std::cout << "Enter the item number: " ;
            std::cin >> item_number;
            if (items[item_number]->id != item_number ) std::cout << "Item not found." << std::endl;
            else { 
            std::cout << "Item "<< item_number << ": "<< std::endl ;
            std::cout << "Name: " << items[item_number]->name << std::endl 
                    <<"Quantity: "<<items[item_number]->quantity << std::endl
                    <<"Price: " << items[item_number]->price << std::endl;
            }
            break;
            // case 3: {
            // std::cout << "Enter the item number: ";
            // std::cin >> item_number;
            // //std::cout << "####size == " << items.size() <<std::endl;
            // if (item_number >= 0 && item_number < items.size()) { // 유효한 인덱스 범위 확인
            //     std::cout << "Item "<< item_number << ": "<< std::endl ;
            //     std::cout << "Name: " << items[item_number]->name << std::endl 
            //             <<"Quantity: "<<items[item_number]->quantity << std::endl
            //             <<"Price: " << items[item_number]->price << std::endl;
            // } 
            // else {
            //     std::cout << "Item not found" << std::endl; // 유효하지 않은 인덱스일 경우 오류 메시지 출력
            // }
            // break;
            // }

            
            case 4:
            std::cout << "Total cost: " ;
            for (int i = 0 ; i < items.size() ; i++) {
                if (i == items[i]->id) {
                    for (int j = 0 ; j < items[i]->quantity; j++) {
                        total_price = total_price + items[i]->price;
                    }
                }
                else {}
            }
            std::cout << total_price << std::endl;
            break;

            case 5:
            return 0;

            default :
            std::cout << "no.." << std::endl;
            break;
            
        }
        std::cout << "1. Add item" << std::endl;
        std::cout << "2. Delete item" << std::endl;
        std::cout << "3. View item details" << std::endl;
        std::cout << "4. View total cost" << std::endl;
        std::cout << "5. Quit" << std::endl;
        std::cout << "Enter your choice:" << std::endl;
        
        //delete cart;
    }
}