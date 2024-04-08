//2-9. minInteger.cpp: �ǽ����� 2.9 - C++�� cascading operator ������ ����
#include <stdio.h>
#include <stdlib.h>
int *min(int *x, int *y);

int main(void){
    int num1=10, num2=15, num3=6, num4=3;

    printf("1.�ǽ����\n");
    printf("-----------\n");
    printf("%d �� %d �� ���� ����?\n", num2, num1);
    printf("%d\n", *min(&num1, &num2));
    printf("%d �� %d �� ���� ����?\n", *min(&num1, &num2), num3);
    printf("%d\n\n", *min(min(&num1, &num2), &num3));
	    // code �ۼ� �κ�: min(min(min..))) �Ǵ� min(min(..), min(..)) code �ۼ�
	system("pause");
}

/*
int *min(int *x, int *y){
    int *pTemp;    
    if (*x < *y)	
        pTemp = x;
    else
        pTemp = y;
    return pTemp;
}
*/
int* min(int* x, int* y) {
    int pTemp;
    if (*x < *y)
        pTemp = *x;
    else
        pTemp = *y;
    return &pTemp;
}

