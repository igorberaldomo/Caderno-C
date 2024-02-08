#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "gotoescape.h"

int maingotoescape(){
    int z, x, c;
    for (z = 0; z <= 5; z++)
        for (x = 0; x <= 5; x++)
            for (c = 0; c <= 5; c++)
            if( z == 2 && x == 3 && c == 1)
            goto fim;
        else
            printf(" posição [%d,%d,%d]\n",z,x,c);
fim:
printf("fim do progama\n");
system("pause");
return 0;
}