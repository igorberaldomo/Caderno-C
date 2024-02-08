#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "transpose.h"

int maintranspose(){
    int a[5][5];// transpose cada numero
    int i, j;
    int tra[5][5];
    for(i = 0;i < 5;i++ ){
        for(j = 0;j < 5;j++ ){
            printf("digite o  valor da pos %d %d: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for(j = 0;j <5;j++ ){
        for(i = 0;i < 5;i++ ){
            a[i][j] =tra[j][i];
        }
        printf("\n");
    }
for(j = 0;j < 5;j++){
        for(i = 0;i < 5;i++){
            printf("%d",tra[j][i]);
        }
        printf(" ");
    }
    return 0;
}