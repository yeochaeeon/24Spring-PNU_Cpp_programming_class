#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {

    int n ;
    int score ;
    std::cout << "# of students:"<<std::endl;
    std::cin >> n ;
    
    std::vector<std::string> V_name ;
    std::vector<int> V_score ; //

    for (int i = 1; i<=n; i++){
        std::string name_input; //
        int score_input; //

        std::cout << "name & score of student " << i <<": " <<std::endl;
        std::cin >> name_input >> score_input;
        V_name.push_back(name_input);
        V_score.push_back(score_input);
    }

    int average ;
    int sum = 0;
    for (int i = 0 ; i < n; i++){
        sum = sum + V_score[i];
    }
    average = sum / n; 

    std::cout << "The average score of the students is " << average << std::endl;

    int index; 

    index = std::max_element(V_score.begin(),V_score.end()) - V_score.begin();// 이 함수 더 알아보기 
    std::cout <<"The student with the highest score is " << V_name[index]
    << " with a score of " << *(std::max_element(V_score.begin(), V_score.end())) << std::endl; 

}