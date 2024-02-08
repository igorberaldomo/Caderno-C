#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "everything.h"

int maineverything(){
    int i, soma015;
    int array[6] = {1,0,5,-2,-5,7};
    soma015 = array[0] + array[1] + array[5];
    printf("a soma dos numeros 0, 1, e 5 do array e %d\n", soma015);
    array[3] = 100;
    for(i=0;i < 6; i++)
        printf(" o valor da variavel Nº %d e %d\n",i,array[i]);
    return 0;
}