#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "basicmath.h"

int mainbasicmath(){
    char x;
    int a, b;
    printf("digite a operação matemática: ");
    x = getchar();
    printf("digite o primeiro numero: ");
    scanf("%d",&a);
    printf("digite o segundo numero: ");
    scanf("%d",&b);
    switch (x){
        case '+':{
            int c = a + b;
            printf("soma: %d\n", c);
        }
        break;
        case '-':{
            int d = a - b;
            printf("subtração: %d\n", d);
            }
        break;
         case '*':{
            int e = a * b;
            printf("multiplicação: %d\n", e);
        }
        break;
         case '/':{
            int f = a / b;
            printf("divisão: %d\n", f);
        }
        break;
        default : printf("Não é operação.\n");
    }
    system("pause");
    return 0;

}