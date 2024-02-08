#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calcfatorial.h"

int fatorial (int n){
    int i, f =1;
    for(i = 1 ; i <= n; i++)
    f = f *i;
    
    return f;
}

int maincalcfatorial(){
    printf("digite um numero inteiro positivo: ");
    int x;
    scanf("%d", &x);
    int fat = fatorial(x);
    printf("o fatorial de %d eh : %d\n", x,fat);
    return 0;
}