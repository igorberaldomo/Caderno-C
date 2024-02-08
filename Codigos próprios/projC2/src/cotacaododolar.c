#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "cotacaododolar.h"

int maincotacaododolar(){
    float R, D, resultado;
    printf("digite o valor em real\n");
    scanf("%f",&R);
    printf("digite a cotação do dolar\n");
    scanf("%f",&D);
    resultado = R / D;
    printf(" você tem %f em dolares\n", resultado);
    return 0;
}