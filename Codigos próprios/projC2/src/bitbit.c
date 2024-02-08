#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "asciiconvert.h"

int mainbitbit(){
    unsigned char x, y;
    x = 44;
    printf("x = %d\n",x);
    y = x << 1;
    printf("x << 1 = %d\n",y);
    y = x >> 1;
    printf("x >> 1 = %d\n",y);
    return 0;
}