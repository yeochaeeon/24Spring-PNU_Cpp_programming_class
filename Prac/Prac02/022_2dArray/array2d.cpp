#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // 배열의 최대 크기를 상수로 정의합니다.

int main() {
    int row, col;
    cin >> row;
    cin >> col;

    int val[MAX_SIZE][MAX_SIZE]; // 고정 크기의 2차원 배열을 선언합니다.

    for(int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> val[i][j];
        }
    }

    // 각 행과 열의 합을 저장할 배열 초기화.
    int rowsum[MAX_SIZE] = {0};
    int colsum[MAX_SIZE] = {0};

    // 행의 합을 구하는 코드
    for (int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            rowsum[i] += val[i][j];
        }
    }

    // 열의 합을 구하는 코드
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            colsum[i] += val[j][i];
        }
    }

    
    for (int i = 0; i < row; i++) {
        cout << rowsum[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < col; i++) {
        cout << colsum[i] << " ";
    }
    cout << endl;

    return 0;
}
