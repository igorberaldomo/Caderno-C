#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "scalefor.h"

int mainscalefor(){
    int i, j;
    for ( i = 1; i <5; i++){
        for (j = 1; j < 5; j ++){
            if(i == j)
            printf("1 ");
            else
            printf("0 ");
        }
    printf("\n");
    }
    system("pause");
    return 0;
}