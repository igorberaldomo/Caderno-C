
#include <stdio.h>
#include <stdlib.h>
#include "doublepreincrement.h"

int maindoublepreincrement(){
    int y, x = 10;
    y = ++x;
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    system ("pause");
    return 0;
}