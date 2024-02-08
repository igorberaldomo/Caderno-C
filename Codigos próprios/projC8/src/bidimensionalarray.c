#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "bidimensionalarray.h"

void imprimebi(int n[][2], int m){
    int i,j;
    for (i = 0; i < m; i++)
     for (j = 0; j < 2; j++)
        printf("%d\n", n[i][j]);
}

int mainbidimensionalarray(){
    int mat[3][2] = {{1,2},{3,4},{5,6}};
    imprimebi(mat,3);
    return 0;
}