#include "pointer.h"

void update(int* a, int* b){

    int na,nb;
    
    na = *a + *b;
    nb = *a - *b;

    *a = na;
    *b = nb;

}