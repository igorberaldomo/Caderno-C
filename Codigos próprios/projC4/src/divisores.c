#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "divisores.h"

int maindivisores(){
    int n = 0;
    printf("digite um numero: ");
    scanf("%d", &n);
    printf("os divisores do numero são: ");
    for (int i = 1; i <= n; i++)
        if(n % i == 0)
            printf("%d ", i);
    printf ("\n");
    system("pause");
    return 0;
}
 