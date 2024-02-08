
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "eightfindxandy.h"

int maineightfindxandy(){
    int i, soma;
    int vet[8] = {0,0,0,0,0,0,0,0};
    int a,b;
    printf(" digite qual é a posição de a (menor que 8): \n");
    scanf("%d", &a);
    printf(" digite qual é a posição de b (menor que 8): \n");
    scanf("%d", &b);
    for (i = 0; i < 8; i++){
        printf("digite o valor da cedula %d: ",i);
        scanf("%d", &vet[i]);}
    soma = vet[a] + vet[b];
    printf("a soma da cedula %d e da cedula %d e %d",a,b,soma);
    return 0;
        
}