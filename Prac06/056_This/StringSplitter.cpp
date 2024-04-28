#include "StringSplitter.h"

StringSplitter& StringSplitter::trim(){
    data.erase(0,data.find_first_not_of(" ")); // 공백이처음으로 안나타나는 index반환함 .
    data.erase(data.find_last_not_of(" ")+1); // 뒤에서 부터 돌면서 위와 같이 공백이 처음으로 안나타나는 인덱스 반환
    // erase함수에 인자가하나면 거기에 해당하는 인덱스부터 끝까지 다 밀어버림
    return *this;
}

StringSplitter& StringSplitter::removeNonAlnum(){
    data.erase(std::remove_if( data.begin(),data.end(),[](char a)
    {return (!isalnum(a)&&!isspace(a)); //공백을 그대로 남겨둘라고
    } ),data.end());
    return *this;

}
// Hello World
std::vector<std::string> StringSplitter::split(char a){

    std::vector<std::string> ret;
    std::stringstream ss(data);
    std::string tmp;

    while(std::getline(ss,tmp,a)) ret.push_back(tmp);

    //for(auto& i:ret) std::cout << i <<std::endl;

    return ret;
}
