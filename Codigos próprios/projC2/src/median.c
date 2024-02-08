#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "median.h"

int mainmedian(){
    int x, y, w, t, resultado;
    scanf("%d%d%d%d", &x,&y,&w, &t);
    resultado = (x+y+w+t)/4;
    printf("resultado é %d\n", resultado);
    return 0;
}