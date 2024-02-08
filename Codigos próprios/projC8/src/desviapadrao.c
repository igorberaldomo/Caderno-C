#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "desviopadrao.h"

double mediavaria(int p[],int q){
    int i = 0;
    float media = 0;
    float DP = 0;
    for(i = 0; i < q;i++){
        media = media + p[i];
    }
    media = media / 5;
    for(i = 0; i < q;i++){
        if( media > p[i]){
        DP = DP +(media - p[i]);
    }else{
        DP = DP +(p[i] - media);
    }
    }
    DP = DP/5;
    printf("%f", DP);
    return 0;
}

int mainvarianciapadrao(){
    int x[5] = {5 , 6 , 7, 6, 8};
    mediavaria(x,5);
    return 0;
}