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
            v1[i].push_back(num); // v1[i] �� ���� . 
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
            // �̰� �ȵǴ� ���� 
            // : ���� result ���͵� 3��¥�� �� ���� �� �� ��������ų� �ٸ� ���� ����
            // : �Ѹ���� �ڸ��� ���� . 
            // �״ϱ� ���� �ƴ϶� push_back �� ���ؼ� �ڸ��� ���� ���� �־������ . 
        }
    }

    for(int i = 0; i <row; i++){
        for(int j = 0 ; j < col ; j++){
            std::cout << result[i][j] << " " ;
        }
        std::cout << "\n" ;
    }





}