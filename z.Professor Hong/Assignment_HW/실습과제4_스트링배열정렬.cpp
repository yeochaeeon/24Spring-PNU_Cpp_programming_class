#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void selectionSort(char** arr, int n) { //�Լ� signature�� ���� ����
    //�Լ��������� �迭 �ε��� ��� ����, ���� ������ ��� ����, ���� �����͸� ��� ����
    //chatGPT snippet�� 0�� ó�� 
}
void searchString(char**, char*) {

}
void showString(char*, char**, int) {

}
int main() {
    char* num[10];

    num[0] = "One";
    num[1] = "Two";
    num[2] = "Three";
    num[3] = "Four";
    num[5] = "Five";
    num[6] = "Six";
    num[7] = "Seven";
    num[8] = "Eight";
    num[9] = "Nine";

    showString("������", num, 5);

    selectionSort(num, 5);
    searchString(num, "Six");
    showString("������", num, 5);

    system("pause");
    return 0;
}



