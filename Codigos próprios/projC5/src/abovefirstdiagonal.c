#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "abovefirstdiagonal.h"

int mainabovefirstdiagonal(){
    int array[5][5];
    int i,j,s,n = 5, soma = 0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("digite o elemento do array[%d][%d]: ", i , j);
            scanf("%d", &array[i][j]);
            s = (n/2);
            if(s < j){
           soma = soma + array[i][j];}
        }
    }
    printf("a soma de acima da diagonal principal é %d", soma);
    return 0;
}