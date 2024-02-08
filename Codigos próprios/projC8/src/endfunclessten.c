#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "endfunclessten.h"

void imprime_log(float x){
    if (x <= 0)
    return;//termina func
    printf("Log = %f\n",log(x));
}
int mainendfunclessten(){
    float x;
    printf("digite X: ");
    scanf("%f", &x);
    imprime_log(x);
    return 0;
}