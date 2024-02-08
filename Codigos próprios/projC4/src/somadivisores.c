#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "somadivisores.h"

int mainsomadivisores(){
    int n = 0, t = 0;
    printf("digite um numero: ");
    scanf("%d", &n);
    printf("a soma dos divisores do numero são: ");
    int i = 1;
    for (; i <= n; i++)
        if(n % i == 0)
        t = t +i;
        printf("%d\n", t);
    system("pause");
    return 0;
}
 