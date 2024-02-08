#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "calc.h"

int calculo(int a,int b, char q){
    int result;
    switch (q){
        case '+' :{ result = a + b;printf(" o resultado é %d",result); break;}
        case '-' :{ result = a - b;printf(" o resultado é %d",result);break;}
        case '*' :{ result = a * b;printf(" o resultado é %d",result);break;}
        case '/' :{result = a / b;printf(" o resultado é %d",result);break;}
        default: printf("operação nao encontrada");
    }
    return 0;
}

int maincalc(){
    int x, z;
    char y;
    printf("digite o tipo de operação: ");
    y = getchar();
    printf("digite o valor de x: ");
    scanf("%d", &x);
    printf("digite o valor de z: ");
    scanf("%d", &z);
    calculo(x,z,y);
    return 0;
}

