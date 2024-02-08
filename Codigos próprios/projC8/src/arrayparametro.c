#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "arrayparametro.h"

void imprime2(int *n, int m){
    int i;
    for (i = 0; i < m; i++)
        printf("%d\n", n[i]);
}

int mainarrayparametro(){
    int v[5] = {1,2,3,4,5};
    imprime2(v,5);
    return 0;
}