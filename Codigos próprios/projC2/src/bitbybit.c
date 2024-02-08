#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "bitbybit.h"

int mainbitbybit(){
    unsigned char x, y;
    x = 44;
    printf("x = %d\n",x);
    y = ~x;
    printf("~x = %d\n",y);
    system("pause");
    return 0;
}