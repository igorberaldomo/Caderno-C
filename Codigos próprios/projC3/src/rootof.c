#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "rootof.h"

int mainrootof(){
    int a, b, c, d, x1, x2;
    printf("vamos fazer a equação de segundo grau ax² + bx + c\n");
    printf("digite o valor de a: ");
    scanf("%d", &a);
    printf("digite o valor de b: ");
    scanf("%d", &b);
    printf("digite o valor de c: ");
    scanf("%d", &c);
    d = (b*b) - 4 * a * c;
    x1= (-b)+ sqrt(d)/2*a;
    x2= (-b)- sqrt(d)/2*a;
    if(a == 0){
        printf(" não é equação do segundo grau\n");
    }else{
        printf(" é equação do segundo grau\n");
        if ( d < 0)
        printf("não tem raiz\n");
        else
            if ( d == 0)
            printf("a raiz unica é %d\n", x1);
            else
                if ( d > 0)
            printf(" as raizes são %d e %d\n", x1, x2);
    }
    system("pause");
    return 0;
}