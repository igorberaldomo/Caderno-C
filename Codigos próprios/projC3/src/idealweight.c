#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "idealweight.h"

int mainidealweight()
{
    char S;
    float A, P;
    printf(" para descobrir o seu peso ideal digite 'H' de você for home 'M' se você for mulher: ");
    S = getchar();
    printf(" digite a sua altura: ");
    scanf("%f", &A);
    switch (S){
    case 'H':{
        float P = (72.7 * A) - 58;
        printf(" %f é o seu peso ideal", P);
    }
    break;
        case 'M':{
        float P = (62.1 * A) - 44.7;
        printf(" %f é o seu peso ideal", P);
    }
    break;
    default : printf("não é possivel determinar o seu peso ideal\n");
}
    system("pause");
    return 0;
}