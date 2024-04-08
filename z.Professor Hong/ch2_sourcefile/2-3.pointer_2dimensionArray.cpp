//2-3. pointer_2dimensionArray.cpp: �ǽ����� 2.3
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[3][4] = { {11,12,13,14},{21,22,23,24},{31,32,33,34} };
	int* b;
	int* c[3]; //array of pointers
	int(*d)[4]; //pointer to array

	b = a[0];//2���� �迭�� ���� pointer ������ �����ϴ� ���
	printf("*b : %d\n", *b);
	printf("b[0] : %d\n", b[0]);
	printf("*(++b) : %d\n", *(++b));
	printf("*(++b) : %d\n\n\n", *(++b));

	//�ּ�1
	//*
	//c = a; // c�� ���� ġȯ�� �� �ִ� lvalue�� �ƴϴ�.
	c[0] = a[0];//c[0]�� pointer �����̸� a[0]�� ���� pointer �����̴�.
	d = a;//d�� �迭 [4]�� ����Ű�� pointer �����̴�.
	printf("d = %p, d+1 = %p, d[1] = %p\n", d, d+1, d[1]);//d+1�� ���� row�� ����Ų��
	printf("d[0] = %p, d[0]+1 = %p\n", d[0], d[0]+1);//d[0]+1�� �� row�� ���� ����
	printf("*d = %p, *d+1 = %p\n", *d, *d+1);
	printf("d[0][0] = %d, *d[0] = %d, **d = %d\n\n\n", d[0][0], *d[0], **d);//d�� array to pointer�������� 2���� �迭 ���ٵ� ����
	//*/
	//�ּ�2
	//*
	c[0] = a[0];
	c[1] = a[1];
	c[2] = a[2];
	printf("c[0] = %p, c[1] = %p\n", c[0], c[1]);
	printf("c[0]+1 = %p, *c[1] = %d\n\n", c[0] + 1, *c[1]);
	//�ּ�1 �ǽ����� d[0], d[1]�� �ּҴ� ù°, ��° row�� ���� ����Ű�� �迭 �̸� ���
	/*
	d[0] = a[0]; // ���� �ǿ������� d[0]�� lvalue�� �ƴϹǷ� error �߻�
	d[1] = a[1]; // ���� �ǿ������� d[0]�� lvalue�� �ƴϹǷ� error �߻�
	d[2] = a[2]; // ���� �ǿ������� d[0]�� lvalue�� �ƴϹǷ� error �߻�
	*/
	system("pause");
}