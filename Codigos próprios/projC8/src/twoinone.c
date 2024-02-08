#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "twoinone.h"

void imprime_matriz(int *m, int n){
    int i;
    for (i = 0 ; i < n ; i++)
        printf("%d\n",m[i]);
}

int maintwoinone(){
    int mat[3][2] = {{1,2},{3,4},{5,6}};
    imprime_matriz(&mat[0][0],6);
    return 0;
}