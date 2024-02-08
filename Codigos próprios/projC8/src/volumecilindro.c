#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "volumecilindro.h"

int cilindro(float x,float y){
    float z;
    z = 3.1414592*x*x*y;
    printf(" o volume do cilindro é %f",z);
    return 0;
}

int maincilindro(){
    int a,b;
    printf("digite o raio do circulo: ");
    scanf("%d", &a);
    printf("digite a atura do cilindro ");
    scanf("%d", &b);
    cilindro(a,b);
    return 0;
}