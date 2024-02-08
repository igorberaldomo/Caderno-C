#include <stdio.h>
#include <stdlib.h>
#include "variablenumber.h"
// o objetivo é imprimir o valor da variavel
int mainvariable()
{
    int x=0; // a declaração de variavel sem o valor
    printf("x = %d\n",x);
    x = 5; // define o valor de x
    printf("x = %d\n",x);
    system("pause");
    return 0;
}