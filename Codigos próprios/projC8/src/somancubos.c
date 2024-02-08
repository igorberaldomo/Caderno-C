#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "somancubos.h"

void somacubos(int n,int soma)
{
    if (n > 0)
    {
        soma = soma + (n*n);
        somacubos(n-1,soma);
    }
    if(n == 0)
    {
        printf(" a soma dos cubos ate n e %d", soma);
    }
}

int mainsomancubos()
{
    int n = 0;
    printf("digite o numero que você quer somar até: ");
    scanf("%d", &n);
    somacubos(n,0);
    return 0;
}