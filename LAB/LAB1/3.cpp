#include <iostream>
#include <vector>

int main(){
    
    int row , col ;
    std::cin >> row >> col ;
    int num ;

    std::vector<std::vector<int>> v1(row);
    std::vector<std::vector<int>> v2(row);
    std::vector<std::vector<int>> result(row) ;

    for(int i = 0; i < row ; i++) {
        for (int j = 0; j < col ; j++) {
            std::cin >> num;
            v1[i].push_back(num); // v1[i] 는 벡터 . 
        }
    }

    for(int i = 0; i < row ; i++){
        for (int j = 0; j < col ; j++){
            std::cin >> num;
            v2[i].push_back(num);
        }
    }
    for(int i = 0; i <row; i++){
        for(int j = 0 ; j < col ; j++){
            result[i].push_back(v1[i][j] + v2[i][j]);
            //result[i][j] = v1[i][j] + v2[i][j]; 
            // 이거 안되는 이유 
            // : 지금 result 벡터도 3행짜리 열 벡터 한 줄 만들어진거나 다름 없는 상태
            // : 한마디로 자리가 없음 . 
            // 그니까 저게 아니라 push_back 을 통해서 자리를 만들어서 값을 넣어줘야함 . 
        }
    }

    for(int i = 0; i <row; i++){
        for(int j = 0 ; j < col ; j++){
            std::cout << result[i][j] << " " ;
        }
        std::cout << "\n" ;
    }





}