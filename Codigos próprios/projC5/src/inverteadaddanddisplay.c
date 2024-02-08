#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "inverteadaddanddisplay.h"

int maininverteadaddanddisplay(){
    int i;
    int vet[6] = {0,0,0,0,0,0};
    for (i=0; i <6;i++){
        printf("digite o numero %d do array: \n",i);
        scanf("%d", &vet[i]);}
    printf("%d %d %d %d %d %d\n",vet[5],vet[4], vet[3], vet[2], vet[1], vet[0]);
    return 0;

}