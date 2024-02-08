#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "defaultzero.h"

int maindefaultzero(){
    int i;
    float v1[10] = {1,2,3};
    int v2[10] = {11,22,33};
    char str[10]= "Joao";
    for ( i = 0; i <10; i++)
        printf("%f %d %c\n",v1[i] ,v2[i], str[i]);
    return 0;
}