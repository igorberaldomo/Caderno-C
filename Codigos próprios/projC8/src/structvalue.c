#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "structvalue.h"

struct ponto{
    int x, y;
};

void imprimeS(struct ponto p){
    printf("x = %d\n", p.x);
    printf("y = %d\n", p.y);
}

int mainstructvalue(){
    struct ponto p1 = {10,20};
    imprimeS(p1);
    return 0;
}
