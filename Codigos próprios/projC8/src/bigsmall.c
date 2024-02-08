#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "bigsmall.h"

int bigorsmall(int v[], int m)
{
    int i = 0;
    int s = v[0], b = v[0];
    printf("%d\n", v[1]);
    for (i = 0; i < m; i++)
    {
        if (v[i] < s)
        {
            s = v[i];
        }
        if (b < v[i])
        {
            b = v[i];
        }
        printf("%d e %d\n", b, s);
    }
    printf("o menor numero e: %d\n", s);
    printf("o maior numero e %d\n", b);
    return 0;
}

int mainbigsmal()
{
    int v[5];
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        printf("digite o numero presente na cedula %d: ", i);
        scanf("%d", &v[i]);
    }
    bigorsmall(v, 5);
    return 0;
}