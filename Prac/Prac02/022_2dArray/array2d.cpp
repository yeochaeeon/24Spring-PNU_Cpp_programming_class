#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // �迭�� �ִ� ũ�⸦ ����� �����մϴ�.

int main() {
    int row, col;
    cin >> row;
    cin >> col;

    int val[MAX_SIZE][MAX_SIZE]; // ���� ũ���� 2���� �迭�� �����մϴ�.

    for(int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> val[i][j];
        }
    }

    // �� ��� ���� ���� ������ �迭 �ʱ�ȭ.
    int rowsum[MAX_SIZE] = {0};
    int colsum[MAX_SIZE] = {0};

    // ���� ���� ���ϴ� �ڵ�
    for (int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            rowsum[i] += val[i][j];
        }
    }

    // ���� ���� ���ϴ� �ڵ�
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
