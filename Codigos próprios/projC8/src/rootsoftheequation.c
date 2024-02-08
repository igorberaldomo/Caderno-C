#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "rootsoftheequation.h"


float root(int a, int b, int c)
{
    int x1 = 0;
    int x2 = 0;
    int delta = 0;
    delta = (b * b) - (4 * a * c);
    if(delta < 0){
        printf("nao existem raizes da equação");
    }
    if(delta == 0){
            x1 = -b + (sqrt(delta)) / (2 * a);
        printf(" a única raiz da equação e %d",  x1);
    }
    if(delta>0){

    x1 = -b + (sqrt(delta)) / (2 * a);
        printf(" a primeira raiza da equação e %d",  x1);
    x2 = -b - (sqrt(delta)) / (2 * a);
        printf(" a segunda raiza da equação e %d", x2);
        }
    return 0;
}

int mainrootsoftheequation(){
    int a = 0;
    int b = 0;
    int c = 0;
    printf("em uma equação de segundo grau completa do tipo: ax² +bx +c");
    printf("digite o valor de a: " );
    scanf("%d", &a);
    printf("digite o valor de b: " );
    scanf("%d", &b);
    printf("digite o valor de c: " );
    scanf("%d", &c);
    root(a,b,c);
    return 0;
}