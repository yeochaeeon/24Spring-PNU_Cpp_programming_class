#include <iostream> 
#include <map>
#include <string>
#include <regex>
#include <algorithm>
#include <cctype>

bool cmp(std::pair<std::string,int>&a, std::pair<std::string,int>&b){
    return a.second > b.second;//내림차순 
} //return 값이 true이면 바꿈.

int main() {
    std::string str;
    std::string find;
    std::map<std::string, size_t> words;

    while ( std::cin >> str && str!= "^") {
        for ( int i = 0; i <str.size() ; i++){
            str[i] = tolower(str[i]);
        }
        std::string filtered = std::regex_replace(str, std::regex("[.|,|:|;| ]"), "");
        auto search = words.find(filtered);
        if (search != words.end()) words[filtered]++;
        else words.insert({filtered, 1});
    }

    int total_words = 0; 
    for(auto iter = words.begin(); iter != words.end(); ++iter){
        total_words++;
    }
    //vector로 변환
    std::vector<std::pair<std::string,int>> v(words.begin(),words.end());
    sort(v.begin(),v.end(),cmp);
    std::cout << "#Words: " << total_words << std::endl;
    std::cout << "Top 5 Word Frequencies"<< std::endl;
    int idx = 1;
    for (auto iter = v.begin() ;  iter < v.begin()+5 ; iter++ ){
        std::cout << idx << " " << iter->first << ": " << iter->second << std::endl;
        idx ++;
    }
    
    
    std::cout << "Find Word Frequencies" << std::endl;
    std::cin >> find; 
    for ( int i = 0; i <find.size() ; i++){
            find[i] = tolower(find[i]);
        }
    auto find_iter = words.find(find);
    while (find != "QUIT" && find != "quit") {

        if( find_iter != words.end()) 
        std::cout << find << ": " << words[find] << std::endl;
        else 
        std::cout << find << ": "<< "0" << std::endl;
        std::cin >> find;
        for ( int i = 0; i <find.size() ; i++){
            find[i] = tolower(find[i]);
        }
        find_iter = words.find(find);
    }
    std::cout << std::endl;
    std::cout << "Bye!" <<std::endl;


    

}


