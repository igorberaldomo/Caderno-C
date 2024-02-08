#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "addanddisplayarray.h"

int mainaddanddisplayarray(){
    int i;
    int vet[6] = {0,0,0,0,0,0};
    for (i=0; i <6;i++){
        printf("digite o numero %d do array: \n",i);
        scanf("%d", &vet[i]);}
    printf("%d %d %d %d %d %d\n",vet[0],vet[1], vet[2], vet[3], vet[4], vet[5]);
    return 0;

}