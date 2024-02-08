#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "primenumber.h"

int mainprimenumber(){
int valor, i, divisores = 0;
do{
    printf(" digite um valor maior que 1: ");
    scanf("%d", &valor);
} while(valor < 2);
    for(i =1; i<= valor; i++){
        if (valor % i==0 )
            divisores++;
    }
    if (divisores > 2)
        printf("%d não é primo\n", valor);
    else
        printf("%d é primo\n", valor);
}
