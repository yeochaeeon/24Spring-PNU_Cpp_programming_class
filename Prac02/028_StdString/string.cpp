#include <iostream>
#include <string>
#include <vector>

int countCharacter(const std::string& str, char ch) {

    //implement your code
    int cnt = 0; 
    for(auto i:str){
        if(i == ch){
            cnt = cnt + 1 ;
        }
    }
    
    return cnt;
}



void toUpperCase(std::string& str) {

    //implement your code
    for (int i = 0 ; i < str.size(); i++){
        str[i] = toupper(str[i]);
    }

}



bool startsWith(const std::string_view str, const std::string_view prefix) {

    //implement your code
    int j = 0;
    for(auto i:str){
        if(prefix[j] == i) j++ ;
        else if (prefix[j] == '\0') return 1; 
        else return 0; 
    }
    return 1;
    


}



int main() {

    std::vector<std::string> words = {"hello", "world", "example"};

    char characterToCount = 'l';

    for (const auto& word : words) {

        std::cout << "Count of '" << characterToCount << "' in \"" << word << "\": "

                  << countCharacter(word, characterToCount) << std::endl;

    }

    std::cout << std::endl;



    for (auto& word : words) {

        toUpperCase(word);

        std::cout << "Modified string: " << word << std::endl;

    }

    std::cout << std::endl;

    std::string_view prefix = "EX";

    for (const auto& word : words) {

        std::cout << "Does \"" << word << "\" start with '" << prefix << "'? "

                  << (startsWith(word, prefix) ? "Yes" : "No") << std::endl;

    }

    return 0;

}