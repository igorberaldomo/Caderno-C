#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "simplifiedoperator.h"

int mainsimplifiedoperator(){
    int x = 10, y = 20;
    x += y - 10;
    printf("x = %d\n",x);
    x -= 5;
    printf("x = %d\n",x);
    x*= 10;
    printf("x = %d\n",x);
    x /= 15;
    printf("x = %d\n",x);
    system("pause");
    return 0;
}