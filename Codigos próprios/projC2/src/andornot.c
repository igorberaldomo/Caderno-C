#include <stdlib.h>
#include<stdio.h>
#include <math.h>
#include "andornot.h"

int mainandornot(){
    int r , x = 5, y = 3;
    r = (x > 2) && (y < x); // verdadeiro
    printf("Resultado: %d\n",r);
    r = (x%2 ==0) && (y > 0); // falso
    printf("Resultado: %d\n",r);
    r = (x > 2) || (y > x); // verdadeiro
    printf("Resultado: %d\n",r);
    r = (x%2 ==0) || (y < 0); // falso
    printf("Resultado: %d\n",r);
    r = !(x > 2); // falso
    printf("Resultado: %d\n",r);
    r = !(x > 7) && (x > y); // verdadeiro
    printf("Resultado: %d\n",r);
    system ("Pause");
    return 0;
}