#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "addcoluns.h"

int mainaddcoluns(){
    int i, j, soma0, soma1,soma2;
    int matriz [3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    for(i = 0 ; i <3 ; i++){
        for(j = 0 ; j <3 ; j++){
        printf("digite o valor do elemento em Nº [%d][%d]: ", i,j);
        scanf("%d", &matriz[i][j]); 
            if (i= 0)
            soma0 = soma0 + matriz[i][j];
            if (i = 1)
            soma1 = soma1 + matriz[i][j];
            if (i == 2)
            soma2 = soma2 + matriz[i][j];
            }
        }
    
    printf("a soma da coluna 1 é %d", soma0);
    printf("a soma da coluna 1 é %d", soma1);
    printf("a soma da coluna 1 é %d", soma2);
    return 0;
    }