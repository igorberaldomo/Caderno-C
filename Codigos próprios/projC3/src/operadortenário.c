#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "operadortenario.h"

int mainoperadortenario(){
    int x, y, z;
    printf("Digite x: ");
    scanf("%d",&x);
    printf("Digite y: ");
    scanf("%d",&y);
    z = x > y ? x:y;
    printf("o maior é = %d\n",z);
    system("pause");
    return 0;
}