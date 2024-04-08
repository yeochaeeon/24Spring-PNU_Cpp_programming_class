// 2��-9 typedef2.cpp
#include <stdio.h>
#include <stdlib.h>
//prototype declaration
typedef struct {
	int x;
	int y;
	float value;
}SAMPLE; 
SAMPLE *merge(SAMPLE *fst, SAMPLE *snd);

void main(void){
    SAMPLE *mid;
	SAMPLE first = {1,1,1.123};
	SAMPLE second = {2,2,2.234};
    mid = merge(&first, &second);
	printf("\nAfter call mid=merge()\n");
	printf("mid �� ���\n");
	printf("mid x�� ��� : %d\n", mid->x);//wrong value ���
	printf("mid y�� ��� : %d\n", mid->y);//wrong value ���
	printf("mid value�� ��� : %f\n\n", mid->value);//wrong value ���
	system("pause");
}

SAMPLE *merge(SAMPLE *f, SAMPLE *s){   //return by pointer
	SAMPLE temp;
	temp.x = f->x + s->x; temp.y = f->y + s->y;
	temp.value = f->value + s->value;
	printf("mid �� ���\n");
	printf("mid x�� ��� : %d\n", temp.x);
	printf("mid y�� ��� : %d\n", temp.y);
	printf("mid value�� ��� : %f\n", temp.value);
	return &temp;
}