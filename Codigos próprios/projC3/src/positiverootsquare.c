#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "positiverootsquare.h"

int mainpositiverootsquare(){
    float x, calculo;
    printf("digite um numero positivo: ");
    scanf("%f",&x);
    if(x > 0){
        calculo = x * x;
        printf("%f é o quadrado de %f\n",calculo, x);
        calculo = sqrt(x);
        printf("%f é a raiz de %f\n",calculo, x);
    }
    else{
        printf("esse numero não é positivo");
    }
    system("pause");
    return 0;
}