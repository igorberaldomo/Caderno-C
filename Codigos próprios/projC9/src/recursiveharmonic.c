#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "recursiveharmonic.h"

float harmonic(float a){
    float i = 0;
    float resultado = 0;
    for (i= 0; i < a; i++){
        resultado = resultado +(1/(i+1)); 
    }
    printf("%f", resultado);
    return 0;
}

int mainharmonic(){
    float a = 0;
    printf("digite o valor tanto de a: ");
    scanf("%f",&a);
    harmonic(a);
    return 0;
}