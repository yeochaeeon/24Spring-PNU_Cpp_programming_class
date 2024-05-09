//
// Created by codjs on 2024-05-07.
//
#include <iostream>

#include "StringSplitter.cpp"
int main() {
    std::string myString;
    std::getline(std::cin, myString);
    auto tokens =
            StringSplitter(myString)
                    .trim()
                    .replaceSubstring("World", "Edward")
                    .removePunctuation()
                    .split(' ');

    for (auto& token : tokens)
        std::cout << token << std::endl;

    return 0;
}
