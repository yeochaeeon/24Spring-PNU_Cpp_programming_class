// 2��-4 function.cpp: �Լ� ����� ���� 
#include <stdio.h>
#include <stdlib.h>
// prototype declaration
#define COLS 4
#define ROWS 3
int sum(int a[][COLS], int rows);

void main () {
	int table[ROWS][COLS] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int total;
	total = sum(table, ROWS);
	printf("total = %d\n", total);
	system("pause");
}
int sum(int ar[][COLS], int rows)//�迭�� ���޹޴� parameter�� ����ؾ� �Ѵ�.
//int sum(int (*ar)[COLS], int rows)
{
	int r, c;
	int total = 0;
	/*
	for (r = 0; r <rows; r++)
		for (c = 0; c <COLS; c++)
			total += ar[r][c];
	*/
	//pointer�� ���
	for (r = rows; r > 0; r--, ar++)
		for (c = 0; c < COLS; c++)
			total += (*ar)[c];
	return total;
}