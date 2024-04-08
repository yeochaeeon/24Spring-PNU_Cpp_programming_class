#include <iostream>
#include <string>

enum TYPE {INT, LONG, FLOAT, DOUBLE};

TYPE getType(std::string type) {
    //complete the code
    while (1) {
        if (type == "int") return INT ;
        else if (type == "long") return LONG ;
        else if (type == "float") return FLOAT;
        else if (type == "double") return DOUBLE;
        else printf("Wrong Input.\n");
        //std::cin.clear();
		while (std::cin.get() != '\n');
        std::cin >> type;
        
    }
}

int main() {
    std::string str;
    std::cin >> str;
    TYPE type = getType(str);
    switch (type) {
        case INT:
            std::cout << "INT(" << type << ")" << std::endl;
            break;
        case LONG:
            std::cout << "LONG(" << type << ")" << std::endl;
            break;
        case FLOAT:
            std::cout << "FLOAT(" << type << ")" << std::endl;
            break;
        case DOUBLE:
            std::cout << "DOUBLE(" << type << ")" << std::endl;
            break;
    }
    return 0;
}
