//2-14. file.cpp: �ǽ����� 2.14
#include <stdio.h>
#include <stdlib.h>

void main(){	
	char word[1024]="";	
	char filename[20];
	FILE * readFile;
	FILE * writeFile;	

	printf("\n������ �߰��� file ���� �Է��ϼ���(ex : test.txt)\n");
	scanf("%s", &filename);
	printf("������ �Է��ϼ���->\n");
	writeFile = fopen(filename, "a");
	scanf("%s", &word);
	printf("word = %s\n", word);
	fprintf(writeFile, word);
	fclose(writeFile);
	printf("--------file���--------\n");
	readFile = fopen(filename, "r");
	while(fread(word, 1, 1024, readFile) != 0){		
		printf("the result of fread() = %s", word);
	}
	fclose(readFile);	

	printf("\n\n");
	system("pause");
}