#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "structreference.h"

struct ponto{
    int x, y;
};

void soma_imprime_valor(int *n){
    *n = *n +1;
    printf("Valor = %d\n",*n);
}

int mainstructreference(){
    struct ponto p1 = {10,20};
    soma_imprime_valor(&p1.x);
    soma_imprime_valor(&p1.y);
    return 0;
}