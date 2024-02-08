#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "volumeareareferenciado.h"
#define PI 3.1414592

double medidaesfera(float *a){
    float V;
    float A;
    A = 4 * PI * *a * *a;
    printf(" a area do circulo é %f", A);
    V = 4/3 * PI * *a * *a * *a;
    printf(" o volume do circulo é %f", V);
    return 0;
}

int mainvolumeareareferenciado(){
    float x;
    printf("digite o raio da esfera: ");
    scanf("%f", &x);
    medidaesfera(&x);
    return 0;
}