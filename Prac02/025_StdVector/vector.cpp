#include <iostream>
#include <vector>


int main(){
    
    int row, q;
    std::cin >> row >> q ;
    std::vector<std::vector<int>> vec(row) ; // vec(row) : nxn 으로 만들어짐
    
    int num ; 
    

    for (int i = 0 ; i < row; i++){
        int col;
        std::cin >> col;
        vec[i].resize(col); //무조건 해줘야 함. 0으로 초기화 됨..
        for (int j =0; j < col ; j++){
            std::cin >> num;
            vec[i][j] = num; //이렇게 배열에 직접 대입하려면 
        }
    }

    int q_row ;
    int q_col;

    for (int i = 0; i < q; i++){
        std::cin >> q_row >> q_col;
        std::cout << vec[q_row][q_col] << std::endl;
    }
}
