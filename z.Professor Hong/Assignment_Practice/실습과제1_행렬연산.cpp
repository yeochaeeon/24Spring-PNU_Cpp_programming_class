/*
*  2차원 행렬의 덧셈, 곱셈, 전치 행렬을 구하는 코딩 연습
*  2차원 배열을 사용
*  덧셈, 곱셈, 출력, 난수 입력, 전치 행렬을 구하는 함수로 구현
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

bool showMatrix(int[][], int, int);//2차원 테이블로 출력
bool addMatrix(int[][], int, int[][], int, int[][], int);// C = A + B
bool getMatrix(int [][], int);
bool multiplyMatrix(int[][], int, int[][], int, int[][], int);
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

bool getMatrix(int arr[][COLS], int rows)
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

bool showMatrix(int a[][ACOLS])