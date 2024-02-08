#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "volumeesfera.h"

int esfera(float x){
    float z;
    z = 4/(3*3.1414592) * x * x* x;
    printf(" o volume da esfera e é %f",z);
    return 0;
}

int mainesfera(){
    int a;
    printf("digite o raio da circunferencia: ");
    scanf("%d", &a);
    esfera(a);
    return 0;
}