#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "biggestvariableofalist.h"

int mainbiggestvariableofalist(){
    int i, lista[5] = {3,18,2,51,45};
    int maior = lista[0];
    for( i = 1; i <5;i++){
        if(maior < lista[i])
            maior = lista[i];
    }
    printf("a maior variavel e %d\n", maior);
    return 0;
}
