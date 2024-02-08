#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "bellowfirstdiagonal.h"

int mainbellowfirstdiagonal(){
    int array[6][6];
    int i,j,s,n = 6, soma = 0;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("digite o elemento do array[%d][%d]: ", i , j);
            scanf("%d", &array[i][j]);
            s = (n/2);
            if(s > j){
           soma = soma + array[i][j];}
        }
    }
    printf("a soma de abaixo da diagonal principal é %d", soma);
    return 0;
}