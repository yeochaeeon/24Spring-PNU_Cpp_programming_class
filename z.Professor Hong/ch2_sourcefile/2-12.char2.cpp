//2-12. char2.cpp: �ǽ����� 2.12
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    char *i = "monday";
    char *j;
    char *p[10];
    char *q[10];
    char r[10] = "sunday";
    char s[10];
	//1�� �ּ�
    //*
    //*i = "good";
    j = i;
	//s = r;//s�� lvalue�� �ƴϴ� �迭 �̸����� ����̴�.
	//strcpy(i, "saturday");//runtime ���� �߻�, *i�� ��� �� "monday"�� ����, ���� �Ұ�
	strcpy(r, "friday");
	*p = "wednesday";//p�� array of pointer
    *q = "thursday";
	//*/
    //2�� �ּ�
    //*
    printf("i = %s, j = %s\n", i, j);
    printf("*p = %s, *q = %s\n", *p, *q);
    printf("r = %s\n", r);
	// i,j, *p ��� ���ڿ� ����� ����Ű�� �����Ƿ� ���� �Ұ�
    //strcpy(j, i);
	//strcpy(i, *p);
	strcpy(s, r);
	//strcpy(*p, i);
	//strcpy(*p, *q);
	//strcpy(*p, s);

    //------------------------------
	printf("\n\n*i->r[] ���ڿ� ������\n");
    strcpy(r, i);
    printf("i = %s, r = %s\n", i, r);
    printf("strcmp(r, i) = %d (0->����, 0�ƴѼ���->�ٸ���)\n", strcmp(r, i));
   
    printf("\n\n*p[]->s[] ���ڿ� ������\n");
    strcpy(s, *p);
    printf("s = %s, *p = %s\n", s, *p);
    printf("strcmp(s, *p) = %d (0->����, 0�ƴѼ���->�ٸ���)\n", strcmp(s, *p));

    printf("\n\nr[]->s[] ���ڿ� ������\n");
    strcpy(s, r);
    printf("r = %s, s = %s\n", r, s);
    printf("strcmp(s,r) = %d (0->����, 0�ƴѼ���->�ٸ���)\n", strcmp(s, r));
    //*/
    system("pause");
}