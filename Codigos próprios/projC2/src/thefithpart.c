#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "thefithpart.h"

int mainthefithpart(){
 int x, resultado;
 printf("digite o X a ser dividido por 5: ");
 scanf( "%d", &x);
 resultado = x /5;
 printf( "x dividido por 5 é %d\n", resultado);
 return 0;
}