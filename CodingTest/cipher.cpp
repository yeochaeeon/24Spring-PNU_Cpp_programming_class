//
// Created by codjs on 2024-05-20.
//
#include <string>
#include <iostream>
using namespace std;


string solution(string cipher, int code) {
    string answer = "";

    for (int i = code ; i < cipher.size() ; i = i + code ) {
        answer += cipher[i];
    }

    return answer;
}

int main () {
    string cipher;
    int code ;
    cin >> cipher >> code ;
    cout << solution(cipher,code) << std::endl;
}