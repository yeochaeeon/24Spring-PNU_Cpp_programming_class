//2-11. ragged.cpp: �ǽ� ���� 2.11
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 
void raggedTable();
void raggedTable2();

int main(){
	int **T1;
	//1�� �ּ�
	
	T1 = (int**)malloc(32);//2019 ������ pointer�� ���̰� 8����Ʈ
	//T1 = (int**)malloc(16);
	T1[0] = (int*)malloc(4);
	//*T1 = (int*)malloc(4);
	T1[1] = (int*)malloc(8);
	//*(T1+1) = (int*)malloc(8);
	T1[2] = (int*)malloc(12);
	T1[3] = (int*)malloc(16);
	printf("\nsize of T1 = %u, size of T1[0]= %u\n", sizeof T1, sizeof T1[0]);
	printf("\nsize of *T1 = %u\n", sizeof(*T1));
	printf("\nsize of T1 = %d, size of T1[0]= %d\n", sizeof T1, sizeof T1[0]);
	printf("\nsize of *T1 = %d\n", sizeof(*T1));
	printf("T1 = %p, T1[1] = %p, &T1[1] = %p\n", T1, T1+1, &T1[1]);

	T1[0][0]=0;
	T1[1][0]=1; T1[1][1]=2;
	T1[2][0]=3; T1[2][1]=4; T1[2][2]=5;
	T1[3][0]=6; T1[3][1]=7; T1[3][2]=8; T1[3][3]=9;
	
	int cnt = 1;
	printf("T1[][]�� ���� ��\n");
	for(int i=0; i<4; i++){
		for(int j=0;j<cnt; j++){
			printf("%d ",T1[i][j]);
		}
		printf("\n");
		cnt++;
	}
	printf("\n");
	//T11[0][0]
	printf("**T1 = %d\n", **T1);
	//T1[1][0]
	printf("**(T1+1) = %d\n", **(T1 + 1));
	//T1[1][1]
	printf("*(*(T1+1)+1) = %d\n", *(*(T1 + 1) + 1));
	for (int i = 0; i < 4; i++)
	{
		free(T1[i]);
	}
	free(T1);

	//2�� �ּ�
	/*
	raggedTable();
	*/

	//*
	raggedTable();

	//*/
	//3�� �ּ�
	//�迭���� �̿��Ͽ� ���� ���̰� �ٸ� �迭�� ���ҿ� �����ϴ� ���
	// raggedTable2() ȣ�� �ۼ� �κ�
	//*
	raggedTable2();
	//*/
	system("pause");
	return 0;
}


void raggedTable() {
	int** T2;
	int row, col;
	int rowIndex;
	static int counter = 0;
	printf("���� ���� �Է��ϼ���:");
	scanf_s("%d", &row);
	//calloc(�Ҵ�� ������ ����, �Ҵ�� ������ ũ��)
	T2 = (int **)calloc(row, sizeof(int*)); 
	for (rowIndex = 0; rowIndex < row; rowIndex++) {
		printf("	%�࿡ ���� ���� ���� �Է��ϼ���: ");
		printf("%�࿡ ���� ���� ���� �Է��ϼ���:",rowIndex);
		scanf("%d", &col);
		T2[rowIndex] = (int *)calloc(col+1, sizeof(int));
		//�� ���� ù ���� ���� ���� ����
		for (int j = 0; j < col; j++)
		{
			T2[rowIndex][j] = counter++;
			printf("%d ", T2[rowIndex][j]);
		}
	}

	// �����Ҵ� ���� 2���� �迭�� ��� 1���� �迭�� ���� ������ �� double pointer�� free�ؾ� ��.

		// raggedTable�� ġȯ�ϴ� ������ �ǽ� �ڵ�� �߰�

	// �����Ҵ� ���� 2���� �迭�� ��� 1���� �迭�� ���� ������ �� ���������͸� �����ؾ� ��.

	//*
	for (rowIndex = 0; rowIndex < row; rowIndex++)
	{
		free(T2[rowIndex]);
	}

	free(T2);
	//*/
	return;
}
void raggedTable2() {
	char** T3;
	int row, col;
	int rowIndex;
	static char counter = 'A';
	printf("���� ���� �Է��ϼ���:");
	scanf_s("%d", &row);
	//calloc(�Ҵ�� ������ ����, �Ҵ�� ������ ũ��)
	T3 = (char**)calloc(row, sizeof(char*));
	for (rowIndex = 0; rowIndex < row; rowIndex++) {
		printf("	%�࿡ ���� ���� ���� �Է��ϼ���: ", rowIndex);
		scanf("%d", &col);
		T3[rowIndex] = (char*)calloc(col + 1, sizeof(char));
		//�� ���� ù ���� ���� ���� ����
		for (int j = 0; j < col; j++)
		{
			T3[rowIndex][j] = counter++;
			printf("%c ", T3[rowIndex][j]);
		}
	}

	// �����Ҵ� ���� 2���� �迭�� ��� 1���� �迭�� ���� ������ �� double pointer�� free�ؾ� ��.
	//*
	for (rowIndex = 0; rowIndex < row; rowIndex++)
	{
		free(T3[rowIndex]);
	}
	free(T3);
	//�߰� �ۼ��� �ڵ�
	return;
}