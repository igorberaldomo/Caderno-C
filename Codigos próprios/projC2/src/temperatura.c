#include <stdlib.h>
#include<stdio.h>
#include <math.h>
#include "temperatura.h"

int maintemperatura(){
    float celsius, farenheint;
    printf(" digite o valor em Celsius\n");
    scanf("%f", &celsius);
    farenheint = celsius *(9.0/5.0) + 32.0;
    printf("o valor em farenheint é %f\n",farenheint);
    return 0;
}