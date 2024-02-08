#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "elevado.h"

int elevado(int x, int y){
    int beta, i;
    beta = x;
   for(i = 0; i < y; i++){
    x = x*beta;
   }
   printf("%d",x);
   return 0;
}

int mainelevado(){
    int a;
    int b;
    printf("escreva o numero base: ");
    scanf("%d",&a);
    printf("escreva o numero elevado ");
    scanf("%d",&b);
    elevado(a,b);
    return 0;
}