#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "soma.h"

int soma (int a, int b){
    return a+ b;
}

int mainsoma(){
    int n1, n2, n3;
    printf("entre com seu numero: ");
    scanf("%d", &n1);
    printf("entre com seu segundo numero: ");
    scanf("%d", &n2);
    n3 = soma(n1,n2);
    printf("o seu quadrado vale %d\n", n3);
    return 0;
}
