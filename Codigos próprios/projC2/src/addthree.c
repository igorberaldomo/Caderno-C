#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "addthree.h"

int mainaddthree(){
    int x, y, z, resultado;
    scanf("%d%d%d", &x,&y,&z);
    resultado = x + y + z;
    printf( "%d\n",resultado);
    return 0;
}