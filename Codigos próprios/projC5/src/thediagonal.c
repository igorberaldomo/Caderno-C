#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "thediagonal.h"

int mainthediagonal(){
    int matriz[5][5];
    int i, j;
    for(i= 0; i < 5;i++){
        for(j= 0; j < 0;j++){
            matriz[i][j] = 0; 
        } 
    }
    for (i = j; i < 5; i++){
        matriz[i][j] = 1;}
    for( i = 0; i <5; i++){
        for(j= 0; j < 0;j++){
    printf("%d ", matriz[i][j]);
        }
    }
    
    return 0;
}