//2-6. arr3.cpp - double pointer ���: �ǽ����� 2.6
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int A[3][4] = { {11,12,13,14},{21,22,23,24},{31,32,33,34} };
	//int *p = A; // error 'int (*)[4]'���� 'int *'�� �ʱ�ȭ��  �� ����.
	int* p = *A; // *A= int[4], A= int[3][4], p= int *

	//�ּ�1
	//*
	printf("------ 2���� �迭-------\n");
	printf("A: %p\n",A );
	printf("*A: %p\n",*A );
	printf("*(A+1): %p\n",*(A+1) );
	printf("*(*A+0): %d\n",*(*A+0) );
	printf("*(*A+1): %d\n",*(*A+1) );//*A+1�� ���� ����
	printf("**(A+1): %d\n",**(A+1) );//A+1�� row�� ����
	printf("**A: %d\n",**A);


	printf("\n------ ���� pointer -------\n");
	printf("p: %p, *A: %p\n",p, *A);
	printf("(*(p+(4*0)+0)): %d\n",*(p+(4*0)+0)); // p[0]
	printf("(*(p+(4*0)+1)): %d\n",*(p+(4*0)+1)); // p[1]
	printf("(*(p+(4*0)+2)): %d\n",*(p+(4*0)+2)); // p[2]
	printf("(*(p+(4*0)+3)): %d\n",*(p+(4*0)+3)); // p[3]
	printf("(*(p+(4*1)+0)): %d\n",*(p+(4*1)+0)); // p[4]
	printf("(*(p+(4*1)+1)): %d\n",*(p+(4*1)+1)); // p[5]

	printf("p[0]: %d\n",p[0]); // *A[0]
	printf("p[1]: %d\n",p[1]); // *A[1]
	printf("p[4]: %d\n",p[4]); // *A[4]
	printf("p[5]: %d\n",p[5]); // *A[5]
	//*/


	// �ּ�2 ����pointer Ȱ��
	//*
	printf("\n------ ���� pointer: test = &p -------\n");
	int **test;
	//*test = *A;//variable 'test'�� �ʱ�ȭ���� ����� �� ����
	test = &p;//test[][]ó�� ����ϱ� ���� �ʱ�ȭ ��� //int* p = *A;
	printf("A: %p, p: %p, *test : %p\n", A, p, *test);
	printf("**test: %d\n",**test);
	printf("*(*test+(4*0)+0): %d\n",*(*test+(4*0)+0));
	printf("*(*test+(4*0)+1): %d\n",*(*test+(4*0)+1));
	printf("*(*test+(4*0)+2): %d\n",*(*test+(4*0)+2));
	printf("*(*test+(4*0)+3): %d\n",*(*test+(4*0)+3));
	printf("*(*test+(4*1)+0): %d\n",*(*test+(4*1)+0));
	printf("*(*test+(4*1)+1): %d\n",*(*test+(4*1)+1));
	printf("test[0][0]: %d\n",test[0][0]);
	printf("test[0][4]: %d\n\n",test[0][4]);
	//*/
	//�ּ�3
	printf("\n------ ���� pointer: p2 = &pt  -------\n");
	int* pt;
	int ar2[3][2] = { {1,3},{5,7},{9,11} };
	int** p2;  // a pointer to a pointer   
	//pt = &ar2[0][0];
	pt = ar2[0]; // both pointer-to-int
	//pt = ar2; // int (*)[3] ������ ���� int * ������ ������ ġȯ�� �� ����
	p2 = &pt;         // both pointer-to-int *
	//*p2 = ar2[0];     // both pointer-to-int *
	printf("*pt = %d, **p2 = %d\n\n", *pt, **p2);
	(*p2)++;
	printf("*pt = %d, **p2 = %d\n\n", *pt, **p2);
	//p2 = ar2; // int (*)[2] ������ ���� int ** ������ ������ ġȯ�� �� ����
	//*/
	system("pause");
}