#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "converttemp.h"

float temp (int x){
    float y = 0;
    y = (x-32.0)*(5.0/9.0);
    printf("a temperatura em celsios e %f\n",y);
    return 0;
}
int maincomverttemp(){
    int a;
    printf("digite a temperatura: ");
    scanf("%d", &a);
    temp(a);
    printf("a temperatura em farenhing e %d\n", a);
    return 0;
}