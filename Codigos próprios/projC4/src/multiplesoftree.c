#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "multiplesoftree.h"

int mainmultiplesoftree(){
    int n = 0, c = 1;
    printf("informe um a ser mutiplicado por 3: ");
    scanf("%d", &n);
    for (int i = 0 ; i <= n; i++){
        printf("%d\n", c);
        c = c * 3;
    }
    printf("\n");
    return 0;
}