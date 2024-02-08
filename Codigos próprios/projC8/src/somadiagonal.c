#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "somadiagonal.h"

void somadiagonal(int a[][6], int n){
    int i = 0;
    int j = 0;
    int soma = 0;
    for (i = j; i < n; i++){// primeira diagonal
        soma = soma +a[i][i];
        printf("linha %d e coluna %d: %d\n",i,i,a[i][i]);
    }
    for (i = n, j = 0 ; i >= 0 ;i--, j++){
        soma = soma +a[i][j];
        printf("linha %d e coluna %d: %d\n",i,j,a[i][j]);
    }
    printf("%d", soma);
}

int mainsomadiagonal(){
    int i = 0;
    int j = 0;
    int mat[6][6];
    for(i = 0;i < 6;i++ ){
        for(j = 0;j < 6;j++ ){
        mat[i][j] = 1;
        }
    }
    somadiagonal(mat, 6);
    return 0;
}