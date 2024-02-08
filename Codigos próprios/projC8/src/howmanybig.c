#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "howmanybig.h"

int bigtimes(int v[], int m)
{
    int i = 0;
    int t = 0, b = v[0];
    printf("%d\n", v[1]);
    for (i = 0; i < m; i++)
    {
        if (b < v[i])
        {
            b = v[i];
            t = 0;
        }
        if (b == v[i])
        {
            t++;
        }
    }
    printf("o maior numero e %d e apareceu %d vezes\n", b, t);
    return 0;
}

int mainhowmanybig()
{
    int v[5];
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        printf("digite o numero presente na cedula %d: ", i);
        scanf("%d", &v[i]);
    }
    bigtimes(v, 5);
    return 0;
}