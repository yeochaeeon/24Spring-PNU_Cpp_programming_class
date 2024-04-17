//
// Created by codjs on 2024-04-11.
//
#include <iostream>
#include <map>
#include <string>
#include <regex>
#include <algorithm>
#include <cctype>

bool cmp(std::pair<std::string,int>&a, std::pair<std::string,int>&b){
    if (a.second == b.second) return a.first < b.first ; // 빈도수가 같으면 사전순으로 배치
    else return a.second > b.second; //빈도수 기준 내림차순
} //return 값이 true이면 바꿈.

int main() {
    std::string str;
    std::string find;
    std::map<std::string, size_t> words;

    while ( std::cin >> str && str!= "^") {

        std::for_each(str.begin(),
                      str.end(),
                      [](char& a){ a = tolower(a);});

        std::string filtered = std::regex_replace(str,
                                                  std::regex("[.|,|:|;| ]"),
                                                  "");
        auto search = words.find(filtered);
        if (search != words.end()) words[filtered]++;
        else words.insert({filtered, 1});
    }

    int total_words = words.size();

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
    std::for_each(find.begin(),
                  find.end(),
                  [](char& a){ a = tolower(a);});

    auto find_iter = words.find(find);
    while (find != "QUIT" && find != "quit") {

        if( find_iter != words.end())
            std::cout << find << ": " << words[find] << std::endl;
        else
            std::cout << find << ": "<< "0" << std::endl;
        std::cin >> find;
        std::for_each(find.begin(),
                      find.end(),
                      [](char& a){ a = tolower(a);});
        find_iter = words.find(find);
    }
    std::cout << std::endl;
    std::cout << "Bye!" <<std::endl;

}


