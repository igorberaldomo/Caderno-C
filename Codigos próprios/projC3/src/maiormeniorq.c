#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "maiormeniorq.h"


int mainmaiormenorq(){
    int x;
    printf(" digite um numero: ");
    scanf("%d",&x);
    if (x > 10){ // como escrever o if sempre é seguido de ( a condição é escrita aqui na forma)...
        printf("o numero é maior que 10\n");
        }
    else{
        printf("o numero é menor que 10\n");
    }
    system ("pause");//... de uma variavel, seguida de uma condição,mair q (>)
    return 0; // menor q(<), iqual a (=); e um resultado esperado
}