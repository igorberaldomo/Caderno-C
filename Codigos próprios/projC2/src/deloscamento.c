#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "deslocamento.h"

int maindeslocamento(){
    int x,y, resultado;
    printf("digite o primeiro numero\n");
    scanf ("%d", &x);
    printf("digite o segundo numero\n");
    scanf( "%d", &y);
    resultado = x - y;
    printf("%d numeros atras de %d é %d\n", y , x, resultado);
    resultado = x + y;
     printf("%d numeros a frente de %d é %d\n", y , x, resultado);
     return 0;
}