//2���� ��� ����, ����
//chatbot GPT ����ص� ��� �ȳ���
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#define AROWS 3
#define ACOLS 4
#define BROWS 4
#define BCOLS 5
#define CROWS 3
#define CCOLS 5
#define DROWS 3
#define DCOLS 6
int getData(int[][], int);// ���� �����ϰ� ���� �ʿ� - 2�� �̻� �����ص� �ȴ�
int show(int[][], int);// ���� �����ϰ� ���� �ʿ� - 2�� �̻� �����ص� �ȴ�
int[][] add(int[][], int, int[][], int);// ���� �����ϰ� ���� �ʿ�
int[][] multiply(int[][], int, int[][], int);// ���� �����ϰ� ���� �ʿ�

int main()
{
    srand(time(NULL));
    int a[AROWS][ACOLS];
    int a1[AROWS][ACOLS];
    int a2[AROWS][ACOLS];
    int a3[AROWS][ACOLS];
    int b[BROWS][BCOLS];
    int c[CROWS][CCOLS];
    int d[CROWS][CCOLS];
    getData(a, AROWS);//������ ����Ͽ� �Է�
    getData(a1, AROWS);//������ ����Ͽ� �Է�
    getData(b, BROWS);//������ ����Ͽ� �Է�
    show(a, AROWS);  show(a1, AROWS); show(a2, AROWS); show(b, AROWS);
    a2 = add(a, AROWS, a1, AROWS);
    show(a2, AROWS);
    a3 = add(add(a, AROWS, a1, AROWS), a2, AROWS);
    show(a3, AROWS);
    c = multiply(a, AROWS, b, BROWS);
    show(c, AROWS);
    d = multiply(multiply(a, AROWS, b, BROWS), c, CROWS));
    show(d, DROWS);
    system("pause");
    return 1;
}