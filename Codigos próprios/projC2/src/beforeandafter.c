#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "beforeandafter.h"

int mainbeforeandafter(){
    
    int x = 10;
    printf("x é %d\n",x);
    --x;
    printf("o anterior de x é %d\n",x);
    ++x;
    printf("o posterior de x é %d\n",x);
    return 0;
}