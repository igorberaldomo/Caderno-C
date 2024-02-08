#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "addnodiagonal.h"

int mainaddnodiagonal(){
    int array[5][5];
    int i,j, soma = 0, somaf =0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("digite o elemento do array[%d][%d]: ", i , j);
            scanf("%d", &array[i][j]);
            soma = soma + array[i][j];
        }}
        somaf = soma -array[0][0] -array[0][4] -array[1][1] -array[1][3] -array[2][2]-array[3][3] -array[3][1] -array[4][4] -array[4][0];
    printf("a soma sem diagonais é %d", somaf);
    return 0;
}