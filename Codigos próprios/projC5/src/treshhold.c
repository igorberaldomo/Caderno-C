#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "treshhold.h"

int maintreshhold(){
    int i, j ,r;
   int matriz[10][10];
    for (i = 0; i < 10; i++)
        for(j = 0; j < 10; j++)
        printf("digite o valor do elemento em Nº [%d][%d]: ", i,j);
        scanf("%d", &matriz[i][j]);
        if (i < j)
        {
            r =( 2*i +7*j - 2);
            matriz[i][j] = r;
        }
            if (i == j)
            {
            r =((3*i*i) - 1);
                matriz[i][j] = r;
            }
                if (i > j)
                {
                r =((4*i*i*i) + (5*j*j) +1);
                matriz[i][j] = r;
                }
    printf("%d", matriz[i][j]);
    return 0;
}
