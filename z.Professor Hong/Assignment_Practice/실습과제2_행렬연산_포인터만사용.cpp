/*
 1. 함수 내에서는 포인터 사용해야 한다. 배열 형식 a[]은 사용해서 안된다
 2. 3.8일 수업시간내에 제출해야 한다 
*/
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#define AROWS 3
#define ACOLS 4
#define BROWS 4
#define BCOLS 5
#define CROWS 4
#define CCOLS 5
#define DROWS 3
#define DCOLS 4
#define EROWS 3
#define ECOLS 4
#define FROWS 5
#define FCOLS 4
bool showMatrix(int(*)[], int, int);// 행렬 모양으로 출력해야 한다 
bool addMatrix(int(*)[], int, int(*)[ACOLS], int, int(*)[DCOLS], int);// E = A + D
bool getMatrix(int(*arr)[ACOLS], int rows);
bool multiplyMatrix(int(*)[ACOLS], int, int(*)[BCOLS], int, int(*)[CCOLS], int);//C = A * B
bool transposeMatrix(int(*)[ACOLS], int, int(*)[FCOLS]);
int main()
{
    srand(time(NULL));
    int a[ROWS][COLS]; int a1[ROWS][COLS]; int a2[ROWS][COLS];
    int b[BROWS][BCOLS];
    int c[CROWS][CCOLS];

    getMatrix(a, ROWS);
    showMatrix(a, ROWS);
    getMatrix(a1, ROWS);
    showMatrix(a1, ROWS);

    addMatrix(a, ROWS, a1, ROWS, a2, ROWS);
    showMatrix(a2, CROWS);
    getMatrix(b, BROWS);
    showMatrix(b, BROWS);
    multiplyMatrix(a, ROWS, b, BROWS, c, CROWS);
    showMatrix(c, CROWS);
    system("pause");
    return 1;
}
//포인터만 사용해야 한다. 함수 내에서 배열 인덱스 사용 금지. 나머지 함수 모두 구현해야 한다 
bool getMatrix(int(*arr)[COLS], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            *(*(arr + i) + j) = rand() % 10;
        }
    }
    return true;
}