#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "insidethevoid.h"

void soma_mais_um(int n){
    n = n+1;
    printf("Dentro da funçao: x =%d\n",n);
}
int maininsidethevoid(){
    int x = 5;
    printf("Antes da função : x = %d\n", x);
    soma_mais_um(x);
    printf("Depois da função : x = %d\n", x);
    return 0;
}