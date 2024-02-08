#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "biggestone.h"

int mainbiggestone(){
    int x, y;
        printf(" digite um numero: ");
    scanf("%d",&x);
    printf(" digite o segundo numero: ");
    scanf("%d",&y);
    if (x > y){ // como escrever o if sempre é seguido de ( a condição é escrita aqui na forma)...
        printf("o numero x é maior que y \n");
        }
    else{
        printf("o numero x é menor que y \n");
    }
    system ("pause");
    return 0;
}