#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "yearofbirth.h"

int mainyearofbirth(){
   int i, a, b;
    printf("digite sua idade, pressione enter e digite o ano atual\n");
    scanf ("%d %d",&i,&a);
    b = a - i;
    printf(" o seu nascimento foi em %d\n",b);
    return 0;
}


