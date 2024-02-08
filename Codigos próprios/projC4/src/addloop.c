#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "addloop.h"

int mainaddloop(){
    int a ,b ;
    printf("digite o valor de a: ");
    scanf("%d", &a);
    printf(" digite o valor de b: ");
    scanf("%d",&b);
    printf("%d\n", a);
    while(a < b){
        a = a + 1;
        printf("%d\n", a);

    }
    system("pause");
    return 0;
}