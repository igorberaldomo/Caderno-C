#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "union.h"

union tipo{
    short int x;
    unsigned char c;
};
int mainunion(){
    union tipo t;
    t.x = 1545;
    printf("x = %d\n", t.x);
    printf("c = %d\n", t.c);
    t.c = 69;
    printf("x = %d\n", t.x);
    printf("c = %d\n", t.c);
    return 0;
}