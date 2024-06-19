//
// Created by codjs on 2024-06-19.
//
#include <filesystem>
#include <iostream>
#include <string>
#include <stdexcept> // file_size() 사용시 필요할 수 있음

using namespace std;
namespace fs = std::filesystem;

int main() {
    fs::path p ("./"); // 현재 디렉토리
    auto begin = fs::recursive_directory_iterator(p);
    auto end = fs::recursive_directory_iterator();
    for(auto it = begin; it != end; ++it) {
        const string blank(it.depth() * 2, ' ');
        auto& entry = *it;
        if (fs::is_regular_file(entry)) {
            cout << blank << " F " << entry.path();
            try {
                cout << " (" << fs::file_size(entry) << " bytes)" << endl;
            } catch (const fs::filesystem_error& e) {
                cerr << " (Error: " << e.what() << ")" << endl;
            }
        } else if (fs::is_directory(entry)) {
            cout << blank << " D " << entry.path() << endl;
        }
    }

    return 0;
}
