#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "add.h"

int mainadd(){
    int x;
    float y, z;
    scanf("%d",&x);
    printf(" x é %d\n:",x);
    scanf("%f",&y);
    printf(" x é %f\n:",y);
    z = x / y;
    printf("%f é z\n",z);
    system("pause");
    return 0;
}