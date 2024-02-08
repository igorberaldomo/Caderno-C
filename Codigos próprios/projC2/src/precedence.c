#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "precedence.h"

int mainprecedence(){
    int x = 10, y = 20;
    x = x * y - 10;
    printf("x = %d\n",x);
     x *= y - 10;
    printf("x = %d\n",x);
    x = x - 5 + y;
    printf("x = %d\n",x);
    x -= 5 + y;
    printf("x = %d\n",x);
    system("pause");
    return 0;
}