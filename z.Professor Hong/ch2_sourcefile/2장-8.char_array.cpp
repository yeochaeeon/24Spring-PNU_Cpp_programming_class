// 2��-8 char_array.cpp
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char p2[] = "Good";
    char* ptr2 = "Good";

    printf(" % p\n", "Good");
    
    printf(" % s, % s\n", p2, ptr2);
    printf(" % p, % p, % p\n", p2, ptr2, "Good");

    char *num[5];
    char **p;
    char **q;
    char *t;
    //t = num;//char**�� char *�� ġȯ�� �� ����
    //num = t;
	num[0] = "One";
    num[1] = "Two";
    num[2] = "Three";
    num[3] = "Four";
    num[4] = "Five";
	p = num;//���� pointer�� ����ϴ� �ǹ� �ľ� �ʿ�
	printf("*p = %s\n", *p);
    printf("Number\n");
    p = num + 4;
    for(q = num; q <= p; q++)
        printf("*q = %s\n", *q);
    char *ptr;
    char w[10];
    ptr = w;
    printf("\n w[10] = string �Է°�::");
    scanf("%s", ptr);
    printf("*ptr = %s\n", ptr);
	system("pause");
    return 0;
}
