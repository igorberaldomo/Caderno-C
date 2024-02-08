#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "square.h"

int square (int a){
    return (a*a);
}

int mainsquare(){
    int n1, n2;
    printf("entre com seu numero: ");
    scanf("%d", &n1);
    n2 = square(n1);
    printf("o seu quadrado vale %d\n", n2);
    return 0;
}
