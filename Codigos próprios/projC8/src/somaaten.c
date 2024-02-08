#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "somaaten.h"

void somanumeros(int n,int soma)
{
    if (n > 0)
    {
        soma = soma + n;
        somanumeros(n-1,soma);
    }
    if(n == 0)
    {
        printf(" a somatorio de todos os numeros ate n e %d", soma);
    }
}

int mainsomaaten()
{
    int n = 0;
    printf("digite o numero que você quer somar até: ");
    scanf("%d", &n);
    somanumeros(n,0);
    return 0;
}