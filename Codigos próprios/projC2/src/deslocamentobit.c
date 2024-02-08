#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "deslocamentobit.h"

int maindeslocamentobit(){
    int x,y, resultado;
    printf("digite o primeiro numero\n");
    scanf ("%d", &x);
    printf("digite o segundo numero\n");
    scanf( "%d", &y);
   resultado= y <<= x;
    printf("delocamento de %d por %d a esquerda é %d\n", x , y, resultado);
    printf("x <<= y = %d\n",y);
   resultado = y >>= x;
     printf("delocamento de %d por %d a direita é %d\n", x , y, resultado);
    printf("x =>> 1 = %d\n",y);
     return 0;
}