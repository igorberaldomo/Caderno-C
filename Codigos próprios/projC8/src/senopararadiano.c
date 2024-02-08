#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "senopararadiano.h"
#define PI 3.14159265
double pot(double base, int expoente){
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

int fat(int n){
    int i = 1;
    int acc = 1;
    while(i <= n){
        acc = acc*i;
        i++;
    }
    return acc;
}

double seno(double angulo){
    int n = 0;
    double acc = 0;
    while(n < 10){
        acc = acc + (pot(-1.0,n)*pot(angulo,2*n+1)/fat(2*n+1));
        printf("n =%d sen (%lf) = %lf\n",n, angulo,acc);
        n++;
    }
    return 0;
}


int mainsenopararadiano(){
    double angulo;
    printf("digite o angulo; \n");
    scanf("%lf", &angulo);
    seno(angulo);
    return 0;
}