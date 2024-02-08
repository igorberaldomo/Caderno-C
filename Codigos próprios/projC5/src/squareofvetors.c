#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "squareofvetors.h"

int mainsquareofvetors(){
    int i,j;
    int vet1[20], vet2[20];
    for(i=0;i < 20;i++){
    printf(" digite o valor da cedula nº %d: ", i);
    scanf("%d",&vet1[i]);
    vet2[i] = vet1[i]*vet1[i];}
    for(j = 0; j < 20;j++){
        printf("%d ", vet1[j]);
        printf("%d ", vet2[j]);
    }
    return 0;
}