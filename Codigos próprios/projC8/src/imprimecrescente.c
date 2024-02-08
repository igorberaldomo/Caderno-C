#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "imprimecrescente.h"

void imprimecrescente(int n, int nulo)
{
    if (nulo < n+1)
    {
        printf("%d", nulo);
        nulo++;
        imprimecrescente(n, nulo);
    }
    if (nulo == n)
    {
        printf(" acabou");
    }
}

int mainimprimecrescente()
{
    int n = 0;
    printf("digite o numero que vove quer acrescer ate chegar a n: ");
    scanf("%d", &n);
    imprimecrescente(n, 0);
    return 0;
}