#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "numeroneperiano.h"

double neperiano(int n){
    int max = n;
    int i, j;
    float E = 1.0;
    for(i=1; i <= max;i++){
        float f = 1.0;
        for(j = 1; j <= i ; j++){
            f = f * j;
        }
        E = E + 1.0/f;
    }
    printf ("E = %f\n",E);
    return 0;
}

int mainnepariano(){
    int n = 0;
    printf(" digite o numero de casas que o numero de operaçoes: ");
    scanf("%d", &n);
    neperiano(n);
    return 0;
}