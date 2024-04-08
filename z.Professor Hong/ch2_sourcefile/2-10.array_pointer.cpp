//2-10. array_pointer.cpp - function pointer�� array�� ����: �ǽ����� 2.10
#include <stdio.h>
#include <stdlib.h>
//�� ������ ���� ���ϴ� �Լ�
int plus(int i, int j) {return i+j;}	
//�� ������ ���� ���ϴ� �Լ�
int minus(int i, int j) {return i-j;}	

//�ּ� 3
/*
//�� ������ ���� ���ϴ� �Լ�
int multiply(int i, int j) { } 
//�� ������ �����⸦ ���ϴ� �Լ�
int division(int i, int j) { } 
*/

int main (){
    int x = 10, y = 5;
    //�Լ� pointer ����
    int (*p)(int, int)=0;
    
    printf("1. �ǽ����\n");
    printf("-----------\n");
    printf("*p�� ����Ű�� �ּҰ� ���� ��� ��� ���\n");
    printf("*p ��� ��: %p\n", *p);

    //�Լ� pointer�� plus()�Լ� �ּҰ� reference
    p = &plus; 
    printf("*p�� plus()�Լ��� �ּҰ� reference �� ��� ���\n");
    printf("*p ��� ��: %p\n", *p);

    //�ּ� 1
    
    // plus()�Լ� �ּҰ��� reference
    printf("(*p)(x, y) ��� ��: %d\n", (*p)(x, y)); 
    // plus()�Լ� �ּҰ��� reference
    printf("p(x, y) ��� ��: %d\n", p(x, y)); 
    // plus()�Լ� �ּҰ��� reference
    printf("(*******p)(x, y) ��� ��: %d\n\n", (*******p)(x, y));
    printf("\n\n\n");
	
    //�ּ� 2
   
    //�Լ� pointer �迭 �ʱ�ȭ
    int (*ap[2])(int, int) = {plus, minus}; // �Լ� pointer�� array of pointer�� ����ϴ� ������ ��
    printf("*ap[2])(int, int) �Լ� pointer �迭 ���� �� ��� ���\n");
    // plus() ����
    printf("ap[0](x,y)��� ��: %d\n", ap[0](x, y));  
    // plus() ����
    printf("(*****ap[0])(x,y)��� ��: %d\n",(*****ap[0])(x, y));
    //minus() ����
    printf("(*ap[1])(x,y)��� ��: %d\n\n", (*ap[1])(x, y)); 
    
	system("pause");
}