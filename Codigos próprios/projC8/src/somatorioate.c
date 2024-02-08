#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "somatorioate.h"

int somaate (int a){
    int i;
    int soma = 0;
    for(i = 1; i < (a + 1); i++){
        soma = soma + i;
    }
    printf(" a soma de tudo é: %d", soma);
    return 0;
}

int mainsomatorioate(){
    int x;
    printf(" digite o numero que voce quer somar até: ");
    scanf("%d", &x);
    somaate(x);
    return 0;
}