#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "harmonicnumber.h"

int mainharmonicnumber(){
    float har = 1.0;
    int n = 0;
    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);
    if (n != 1)
        for (int i = 2; i <= n; i++)
        {
            float o = i;
            har = har + (1.0 / o);
        }
    printf(" Hn(%d) é %f.\n", n, har);
    return 0;
}