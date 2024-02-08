#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "directreturn.h"

int soma1(int x, int y){
    return x + y;
}

int maindirectreturn(){
    int a, b;
    printf("digite a: ");
    scanf("%d", &a);
    printf("digite b: ");
    scanf("%d", &b);
    printf("soma = %d\n", soma1(a,b));
    return 0;
}
