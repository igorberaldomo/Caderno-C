#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "howmanypairs.h"

int mainhowmanypairs(){
    int i, d;
    int vet[10];
    for(i = 0; i < 9;i++){
        printf(" escreva o valor do vet[%d]", i);
        scanf("%d", &vet[i]);
        if (vet[i]/2 == 0)
        d++;
        else
        printf(" não é par");
        }
    printf("%d numeros foram pares", d);
    return 0;
}