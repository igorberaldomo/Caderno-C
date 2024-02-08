#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "addseconddiagonal.h"

int mainaddseconddiagonal(){
    int array[3][3];
    int i,j, soma = 0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("digite o elemento do array[%d][%d]: ", i , j);
            scanf("%d", &array[i][j]);
           soma = array[1][1] +array[2][0] +array[0][2];
        }
    }
    printf("a soma da diagonal secundaria é %d", soma);
    return 0;
}