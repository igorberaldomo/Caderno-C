#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "deslocatebits.h"

int maindeslocatebits(){
    unsigned char x, y;
    x = 44;
    printf("x = %d\n",x);
    y = x <<2;
    printf("x << %d\n",y);
    y = x >> 2;
    printf("x >>%d\n",y);
    system ("pause");
    return 0;
}