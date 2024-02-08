#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "inteirofrac.h"

double inteirofrac(float *x){
    int z;
    float v;
    z = *x;
    v = *x - z;
    printf("a parte inteira de %f e %d\n", *x, z);
    printf("a parte fracionaria de %f e %f\n", *x, v);
    return 0;
    }

int maininteirofrac(){
    float x;
    printf("digite o valor de x: ");
    scanf("%f", &x);
    inteirofrac(&x);
    return 0;
}
