#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Snumber.h"

int mainSnumber(){
   float n = 0.0, o = 1.0, p = 0.0;
    for (int i = 1; i <= 55; i++)
    {
        float q = i;
        p = p + (o / q);
        printf("(%f, %f), ", o, q);
        o = o + 2.0;
    }
    printf("S = %f", p);
    return 0;
}