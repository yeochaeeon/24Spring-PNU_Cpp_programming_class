#include <iostream>
#include <vector>


int main(){
    
    int row, q;
    std::cin >> row >> q ;
    std::vector<std::vector<int>> vec(row) ; // vec(row) : nxn ���� �������
    
    int num ; 
    

    for (int i = 0 ; i < row; i++){
        int col;
        std::cin >> col;
        vec[i].resize(col); //������ ����� ��. 0���� �ʱ�ȭ ��..
        for (int j =0; j < col ; j++){
            std::cin >> num;
            vec[i][j] = num; //�̷��� �迭�� ���� �����Ϸ��� 
        }
    }

    int q_row ;
    int q_col;

    for (int i = 0; i < q; i++){
        std::cin >> q_row >> q_col;
        std::cout << vec[q_row][q_col] << std::endl;
    }
}
