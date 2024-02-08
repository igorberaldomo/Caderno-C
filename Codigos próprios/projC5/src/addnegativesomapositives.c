#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "addnegativesomapositives.h"

int mainaddnegativesomapositives()
{
    int i, neg =0, pos =0;
    float soma;
    int test[10];
    for (i = 0; i < 10; i++)
    {
        printf("digite o valor da cedula Nº %d: ", i);
        scanf("%d", &test[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        if (test[i] > 0)
        {
            pos = pos + test[i];
        }
        if (test[i] < 0)
        {
            neg++;
        }
    }
    printf(" a quantidade de numeros negativos é %d", neg);
    printf(" a soma dos numeros positivos vai dar %d", pos);
    return 0;
}