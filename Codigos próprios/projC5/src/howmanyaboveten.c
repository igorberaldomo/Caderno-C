#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "howmanyaboveten.h"

int mainhowmanyaboveten(){
    int array[4][4];
    int i,j, above = 0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("digite o elemento do array[%d][%d]: ", i , j);
            scanf("%d", &array[i][j]);
            if (array[i][j] > 10)
                above++;
            if (array[i][j] < 10)
                printf("esse numero não é maior que 10\n");
        }
    }
    printf(" tem %d numeros maiores que 10", above);
    return 0;
}