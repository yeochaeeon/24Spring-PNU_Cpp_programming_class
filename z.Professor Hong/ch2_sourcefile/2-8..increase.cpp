//2-8. increase.cpp
// 1���� �迭, 2���� �迭�� ���� ������Ű�� �Լ� ȣ��
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 5
void increase(int *a, int size);
//void increase(int a[], int size);
void increaseArrayPtr(int* [], int);
void main(void)
{
	int a1[COL] = { 1,2,3,4,5 };
	int *end1;
	int *ap1;
	//a1 �迭�� ������ index �ּ� ����
	end1 = a1 + COL - 1;
	//1�� �ּ� *******************************************
    //*
	printf("1�� �ּ�\n\n");
	//a1 = a1 +1; //a1�� �迭 �ּҸ� ��Ÿ���� ����μ� ���� ����
	increase(a1, COL);
	printf("a1�� ���� increase() ȣ�� ��\n");
	// for������ ap1++�� a1[0] -> a1[1] -> a1[2]�� ����� �����̴�.
	for (ap1 = a1; ap1 <= end1; ap1++) {
		// ap1�� ����� �ּҿ� �ش��ϴ� ������ ���
		printf(" %d", *ap1);
	}
	printf("\n\n");

	//2�� �ּ� ***********************************************
	int a2[ROW][COL] = { {1,2,3,4,5}, {11,12,13,14,15}, {21,22,23,24,25} };

	//���� *ap2�� �������� ���� pointer�ε� a2�� 2���� �迭�̱� ������ ����
	//int *ap2 = a2;//int (*)[5]�� ���� "int *"�������� �ʱ�ȭ ���ϴ� ����   


	//ap2�� COL���� ���� ������ �迭�� ���� �ּҸ� ����
	int *ap2 = *a2;
	//int *ap2; ap2 = *a2;�� ���� �����̴�. ap2�� 0���� �����ּҸ� �����Եǰ�,
	// *ap2�� 0���� ù ���� ���� ����Ű�� �ȴ�.

	int *end2 = *a2 + (ROW*COL) - 1;
	//*a2�� a2�� ù��° ���� �ּ� ���� �ǹ�
	increase(*a2, ROW*COL);
	//increase(a2, ROW*COL);// int (*)[] ������ parameter�� int []�� ȣȯ���� �ʴ´�
	printf("a2�� ���� increase() ȣ�� ��\n");
	//for������ ap2++�� a2[0][0] -> a2[0][1] -> a2[0][2]�� ����� �����̴�.
	for (ap2 = *a2; ap2 <= end2; ap2++) {
		//ap2�� ����� �ּҿ� �ش��ϴ� ������ ���
		printf(" %d", *ap2);
	}

	printf("\n");
	int a[2][3] = { 1,2,3,4,5,6 };
	int* b[2] = { a[0], a[1] };
	increaseArrayPtr(b, 2);
	printf("\n");
	//*/
	system("pause");
}
void increaseArrayPtr(int *x[], int n) //array of pointer�� ����� parameter passing int (*x)[]�� �����߻� 
{
	printf("\narray of pointer�� ����� ���\n");
	for (int i = 0; i < n; i++)
	{
		//printf(" %d", *(x[i] + 1));
		for (int j = 0; j < 3; j++)
			printf(" %d", *(x[i] + j));
		printf("\n");
	}

}
void increase(int a[], int size) {
	int *end;
	int *ap;
	end = a + size - 1;
	a = a + 1;//a�� a[] ����������� function������ pointer ������ ���ֵȴ�.
	for (ap = a; ap <= end; ap++)
		*ap = *ap * 2;
	return;
}
/*
void increase(int *a, int size) {
	int *end;
	int *ap;
	end = a + size - 1;
	for (ap = a; ap <= end; ap++)
		*ap = *ap * 2;
	return;
}
*/