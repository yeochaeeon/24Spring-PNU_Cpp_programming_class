#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#define MaxCounts 30
#define AROWS 3
#define ACOLS 4
#define BROWS 4
#define BCOLS 5
#define CROWS 3
#define CCOLS 5

//int getMatrix(int[], int);//���� �����Ͽ� ó�� - pointer�� ����Ͽ� ����
void showMatrix(int[], int, int);

bool multiplyMatrix(int a[], int, int, int b[], int, int, int c[], int, int);//c = a * b�� ����ϰ� c�� return
//bool freeMatrix(int[], int, int);
int main()
{
    srand(time(NULL));

    int a[] = { 1,0,1,0,1,0,1,1,1,0,0,1 };
    int b[] = { 1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1 };
    int c[15] = { 0 };
    showMatrix(a, AROWS, ACOLS); showMatrix(b, BROWS, BCOLS);
    bool result;
    result = multiplyMatrix(a, AROWS, ACOLS, b, BROWS, BCOLS, c, CROWS, CCOLS);
    if (!result)
        printf(" a�� ���� b�� ���� ���ڰ� �޶� ���� ��� �ȵȴ�");
    showMatrix(c, CROWS, CCOLS);

    //freeMatrix(c, CROWS, CCOLS);
    system("pause");
    return 1;
}

void showMatrix(int* a, int r, int c) {
    printf(" matrix row = %d, col = %d\n", r, c);
    for (int i = 0; i < r; i++)
    {
    //��� ��� ����
    }
}
bool multiplyMatrix(int a[], int ar, int ac, int b[], int br, int bc, int c[], int cr, int cc) {
    if (ac != br)return false;
    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < bc; j++) {
    //��� ���� ����
        }
    }

}