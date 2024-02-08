#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "advancedmath.h"

int mainadvancedmath(){
    char x;
    int a, b,c;
    printf("digite o numero da operação: ");
    x = getchar();
    printf("digite o primeiro numero: ");
    scanf("%d",&a);
    printf("digite o segundo numero: ");
    scanf("%d",&b);
    printf("digite o terceiro numero: ");
    scanf("%d",&c);
    switch (x){
        case '1':{
            int d = a * b *c;
            printf("geométrica: %d\n", d);
        }
        break;
        case '2':{
            int e = (a +2*b +3*c)/6;
            printf("poderada: %d\n", e);
            }
        break;
         case '3':{
            int f = 1/(1/a + 1/b +1/c);
            printf("harmônica: %d\n", f);
        }
        break;
         case '4':{
            int g = (a+b+c)/3;
            printf("Aritimético %d\n", g);
        }
        break;
        default : printf(" operação não progamada.\n");
    }
    system("pause");
    return 0;

}