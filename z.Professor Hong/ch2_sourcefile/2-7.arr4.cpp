//2-7. arr4.cpp
//array of pointers�� �ʱ�ȭ ���
#include <stdio.h>
#include <stdlib.h>

void main(){

	int b[10]={1,2,3,4,5,6,7,8,9,10};
	int *q[5];

	//q = b; //q�� lvalue�� �ƴϴ�. q�� �迭�̸� �� ���Ұ� pointer�̴�.
	//q ���� Ÿ��: int*[6], b ���� Ÿ��: int[10]

	// �ּҰ�
	q[0] = b; // q[0] ���� Ÿ��: int *, b ���� Ÿ��: int[]
	q[1] = b+2;
	q[2] = b+4;
	q[3] = b+6;
	q[4] = b+8;
	//q[3][2] = b; //'int *'���� 'int'�� ��ȯ�� �� ����.
	q[3][2] = 55;//q[4]�� �ش�

	printf("b: %p, q[0]: %p, q[1]: %p, q[2]: %p, q[3]: %p\n", b, q[0], q[1], q[2], q[3]);

	printf("*q[0]: %d\n", *q[0]);
	printf("*q[1]: %d\n", *q[1]); 
	printf("*q[2]: %d\n", *q[2]);
	printf("*q[3]: %d\n", *q[3]);
	printf("*q[4]: %d\n", *q[4]);
	printf("q[3][2]: %d, q[4][0]: %d\n", q[3][2], q[4][0]);//���� ���� �μ�Ǵ� ������ �����ϴ� �� �ʿ�
	for (int i = 0; i < 10; i++)
		printf(" %d", b[i]);
	system("pause");
}