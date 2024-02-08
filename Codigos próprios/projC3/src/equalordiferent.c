#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "equalordiferent.h"


int mainequalordiferent(){
    int x, y;
    printf(" digite um numero: ");
    scanf("%d",&x);
    printf(" digite o segundo numero: ");
    scanf("%d",&y);
    if (x == 10){ // como escrever o if sempre é seguido de ( a condição é escrita aqui na forma)...
        printf("o numero x é igual a 10\n");
        }
    else{
        printf("o numero x é diferente de 10\n");
    }
     if (y == 10){ // como escrever o if sempre é seguido de ( a condição é escrita aqui na forma)...
        printf("o numero y é igual a 10\n");
        }
    else{
        printf("o numero y é diferente de 10\n");
    }
    system ("pause");//... de uma variavel, seguida de uma condição,mair q (>)
    return 0; // menor q(<), iqual a (=); e um resultado esperad
}