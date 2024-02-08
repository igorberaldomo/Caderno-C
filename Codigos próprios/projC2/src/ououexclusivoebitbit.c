#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ououexclusivoebibit.h"

int mainououexclusivoebitbit(){
    int x,y, resultado;
    printf("digite o primeiro numero\n");
    scanf ("%d", &x);
    printf("digite o segundo numero\n");
    scanf( "%d", &y);
     printf("x & y = %d\n",y);
   resultado= y & x;
    printf("a soma de %d e %d  é %d\n", x , y, resultado);
        printf("x | y = %d\n",y);
   resultado= y | x;
    printf("o ou de %d e %d  é %d\n", x , y, resultado);
         printf("x ^ y = %d\n",y);
   resultado= y ^ x;
    printf("o ou exclusivo de %d e %d  é %d\n", x , y, resultado);
     return 0;
}