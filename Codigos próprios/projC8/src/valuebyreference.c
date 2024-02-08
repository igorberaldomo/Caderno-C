#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "valuebyreference.h"

void soma_mais_dois(int *n){
    *n = *n+2;
    printf("Dentro da funçao: x =%d\n",*n);
}
int mainvaluebyreference(){
    int x = 5;
    printf("Antes da função : x = %d\n", x);
    soma_mais_dois(&x);
    printf("Depois da função : x = %d\n", x);
    return 0;
}