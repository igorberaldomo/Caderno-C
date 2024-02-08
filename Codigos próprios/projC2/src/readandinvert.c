#include <stdlib.h>
#include<stdio.h>
#include <math.h>
#include "readandinvert.h"

int mainreadandinvert(){
    char x , y ,v;
    printf(" digite o numero composto de tres casas decimais ");
    x = getchar();
    y = getchar();
    v = getchar();
    printf("o inverso de %c%c%c é %c%c%C\n",x, y, v, v, y, x);
    return 0;
    
}