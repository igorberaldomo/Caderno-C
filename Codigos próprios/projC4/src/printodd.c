#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "printodd.h"

int mainprintodd(){
    int n = 0, c = 1;
    printf("informe um numero inteiro positivo: ");
    scanf("%d", &n);
    for (int i = 0 ; i <= n; i++){
        printf("%d\n", c);
        c = c +2;
    }
    printf("\n");
    return 0;
}