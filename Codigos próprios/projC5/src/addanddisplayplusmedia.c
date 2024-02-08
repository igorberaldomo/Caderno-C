#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "addanddisplayplusmedia.h"

int mainaddanddisplayplusmedia(){
    int i, media;
    int vet[5] = {0,0,0,0,0};
    for (i=0; i <5;i++){
        printf("digite o numero %d do array: \n",i);
        scanf("%d", &vet[i]);}
    media = (vet[0] + vet[1] + vet[2] + vet[3]+ vet[4])/5;
    printf("%d %d %d %d %d\n",vet[0],vet[1], vet[2], vet[3], vet[4]);
    printf("%d", media);
    return 0;

}