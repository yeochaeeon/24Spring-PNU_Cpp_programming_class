//2-2. pointerArray.cpp: �ǽ� ���� 2.2
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int* b;
	int* c[3]; //array of pointers

	// �ּ�1
	//*
	//*b = 10;//pointer ����b�� ���� run-time�� �ʱ�ȭ�� �� ���� - ���� �ʿ�
	b = a;
	*b = 10;
	//*b = a; // int * ������ ���� int���� (entity��) ġȯ�� �� ����
	printf("a�� �ּ�: %p\n",a);
	printf("b�� �ּ�: %p\n",b);
	printf("a[0] = %d\n",a[0]);
	printf("*b = %d\n\n",*b);
	//*/
	// �ּ� 2 
	//*
	//c = a; // c�� lvalue�� �ƴϴ�. c�� pointer���� array �̸����� ����̴�
	//*c = a; // �ּ��� Ǯ�� ����ÿ��� ���� line 25~27�� �ּ� ó���Ͽ� ����-������ ������ Ȯ��
	//�ּ� �����ÿ��� line 26�� �ּ�ó���Ͽ� ����
	c[0] = &a[0];
	c[1] = &a[4];
	c[2] = &a[8];
	
	printf("&a[0]: %p\n", &a[0]);
	printf("c[0]: %p\n", c[0]);
	printf("&a[4]: %p\n", &a[4]);
	printf("c[1]: %p\n", c[1]);
	printf("*c[0] = %d, *(c[0]+1) = %d, *(c[1]+1) = %d\n\n", *c[0], *(c[0] + 1), *(c[1]+1));
	//
	//*/
	system("pause");
}