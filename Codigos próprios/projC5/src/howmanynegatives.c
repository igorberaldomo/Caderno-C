#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "howmanynegatives.h"

int mainhowmanynegatives(){
    int array[4][4];
    int i,j, bellow = 0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("digite o elemento do array[%d][%d]: ", i , j);
            scanf("%d", &array[i][j]);
            if (array[i][j] < 0){
                bellow++;
                printf("numero negativo\n");
                }
            if (array[i][j] > 0)
                printf("esse numero não é negativo\n");
        }
    }
    printf(" tem %d numeros maiores que 10", bellow);
    return 0;
}