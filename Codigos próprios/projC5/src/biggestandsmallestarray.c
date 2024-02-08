#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "biggestandsmallestarray.h"

int mainbiggestandsmallestarray()
{
    int i, s, l;
    int test[10];
    for (i = 0; i < 9; i++)
    {
        printf("digite o valor da cedula Nº %d: ", i);
        scanf("%d", &test[i]);
    }
    s = test[0];
    l = test[0];
    for (i = 1; i < 9; i++)
    {
        if (s < test[i])
        {
            s = test[i];
        }
        if (l > test[i])
        {
            l = test[i];
        }
    }
    printf(" o maior numero e %d", l);
    printf(" o menor numero e %d", s);
    return 0;
}