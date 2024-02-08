#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "squaredmatriz.h"

int mainsquaredmatriz(){
    int array[5][5], arrays[5][5];
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("digite o elemento do array[%d][%d]: ", i , j);
            scanf("%d", &array[i][j]);
            arrays[i][j] = array[i][j] * array[i][j];
             printf(" na casa %d e %d  os arrays se comportam da seguinte forma\n O primeiro array é %d, enquanto o segundo array é %d\n",i,j,array[i][j], arrays[i][j] );
            }
        }
    
    return 0;
}