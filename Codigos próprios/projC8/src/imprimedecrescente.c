#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "imprimedecrescente.h"

void imprimedecrescente(int n, int nulo)
{
    if (nulo < n+1)
    {
        printf("%d", n);
        n--;
        imprimedecrescente(n, nulo);
    }
    if (nulo == n)
    {
        printf(" acabou");
    }
}

int mainimprimedecrescente()
{
    int n = 0;
    printf("digite o numero que voce quer subtrair 1 ate chegar a 0: ");
    scanf("%d", &n);
    imprimedecrescente(n, 0);
    return 0;
}