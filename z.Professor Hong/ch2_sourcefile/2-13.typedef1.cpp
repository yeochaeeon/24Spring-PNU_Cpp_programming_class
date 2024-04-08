//2-13. typedef1.cpp
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
	float value;
}SAMPLE; 

//prototype declaration

SAMPLE merge(const SAMPLE val[], int n);
//SAMPLE merge(SAMPLE val[], int n);//runtime ���� �߻�-function signature�� �ٸ���
int main(void) {
	SAMPLE nodes[3] = { {20, 10, 6.6}, {3,2,3.3}, {4,4,6.6} };
	SAMPLE mid;
	mid = merge(nodes, 3);
	//�ּ� 1
	//*
	printf("mid �� ���\n");
	printf("mid x�� ��� : %d\n", mid.x);
	printf("mid y�� ��� : %d\n", mid.y);
	printf("mid value�� ��� : %f\n", mid.value);
	//
	//*/
	system("pause");
	return 1;
}

SAMPLE merge(const SAMPLE val[], int n) {
	SAMPLE temp = { 0,0,0.0 };
	for (int i = 0; i < n; i++)
	{
		temp.x += val[i].x;
		temp.y += val[i].y;
		temp.value += val[i].value;
	}
	temp.x /= 3; temp.y /= 3; temp.value /= 3;
	return temp;
}