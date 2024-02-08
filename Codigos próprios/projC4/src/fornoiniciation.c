#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fornoinitiation.h"

int mainfornoinitiation(){
    int a, b ;
    printf(" digite o valor de a:");
    scanf("%d", &a);
    printf(" digite o valor de b:");
    scanf("%d", &b);
    for(; a<= b; a++){
        printf("%d\n",a);
    }
    system("pause");
    return 0;
}