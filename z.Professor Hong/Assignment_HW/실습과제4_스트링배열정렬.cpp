#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void selectionSort(char** arr, int n) { //함수 signature는 변경 금지
    //함수내에서는 배열 인덱스 사용 금지, 이중 포인터 사용 금지, 단일 포인터만 사용 가능
    //chatGPT snippet는 0점 처리 
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

    showString("정렬전", num, 5);

    selectionSort(num, 5);
    searchString(num, "Six");
    showString("정렬후", num, 5);

    system("pause");
    return 0;
}



