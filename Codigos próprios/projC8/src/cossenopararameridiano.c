#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "cossenopararameridiano.h"
#define PI 3.14159265
double pot1(double base, int expoente){
    int i = 0;
    double a = base;
    int b  = expoente;
    double resposta = 1.0 ;
    printf("calculando %lf elevado a %d\n",a,b);
    while(i < b){
        resposta = resposta * a;
        i++;
    }
    printf("\n");
    return resposta;
}

int fat1(int n){
    int i = 1;
    int acc = 1;
    while(i <= n){
        acc = acc*i;
        i++;
    }
    return acc;
}

double cosseno1(double angulo){
    int n = 0;
    double acc = 0;
    while(n < 5){
        acc = acc + (pot1(-1.0,n)*pot1(angulo,2*n)/fat1(2*n));
        printf("n =%d cos(%lf) = %lf\n",n, angulo,acc);
        n++;
    }
    return 0;
}


int maincossenopararadiano(){
    double angulo;
    printf("digite o angulo; \n");
    scanf("%lf", &angulo);
    cosseno1(angulo);
    return 0;
}