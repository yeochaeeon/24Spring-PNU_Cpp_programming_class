#include <iostream>
//23.3.10 �߰��� �ҽ� �ڵ�
using namespace std;

// 2���� �迭�� return�ϴ� �Լ�
int** createArray(int rows, int cols) {
    int** arr = new int* [rows]; // 2���� �迭�� row�� �������� �Ҵ�

    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols]; // 2���� �迭�� column�� �������� �Ҵ�
    }

    return arr;
}
int ** add(int(*p)[4], int n, int(*q)[4], int m, int **arr);
/*
int  (*p)[3] addData(int(*a)[3], int n, int(*b)[3]);//�Լ� return ������ int[][] ��� �ȵ�
*/
int main() {
    int rows = 3, cols = 4;
    int** arr = createArray(rows, cols);
    int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    int b[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    int** c;
    c = (int**)a;
    arr = add(a, 3, b, 3, arr);
    // 2���� �迭�� �� �ʱ�ȭ
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
           // arr[i][j] = i * j;
            printf("c[][] =  %d", c[i][j]);
        }
        printf("\n");
    }

    // ���� �Ҵ��� �޸� ����
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    system("pause");
    return 0;
}
int** add(int(*p)[4], int rows, int(*q)[4], int rows2, int **arr) {
    //static int arr[3][4] = { 0 };
    //int **dp;
    //int *t = *arr;
    //dp = &t;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr[i][j] = p[i][j] + q[i][j];
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
    return arr;
}
/*
int (*p)[] addData(int(*a)[3], int n, int(*b)[3]) {

}

*/