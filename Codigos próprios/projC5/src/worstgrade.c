#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "worstgrade.h"

int mainworstgrade(){
    int i, j, lest = 0 , less = 0,lesser = 0;
    int matriz [10][3] = {{0,0,0},{0,0,0},{0,0,0}};
    for(i = 0 ; i <10 ; i++){
        for(j = 0 ; j <3 ; j++){
        printf("digite o valor do elemento em Nº [%d][%d]: ", i,j);
        scanf("%d", &matriz[i][j]);
        if ( matriz[i][j] == 3)
        lest++;
        if ( matriz[i][j] == 2)
        less++;
        if ( matriz[i][j] == 1)
        lesser++;
        }
    }
    printf("%d alunos tem nota 3, %d alunos tem nota 2, %d alunos tem nota i\n", lest, less, lesser);
    return 0;
}