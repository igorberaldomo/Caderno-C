#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "calcofarrays.h"

int maincalcofarrays(){
    int a[10], b[10], subt[10];
    int i, j,c ;
    for(i = 0 ; i < 10; i++){
        printf("digite o valor da variavel %d do array a[10]",i);
        scanf("%d", &a[i]);}
    for(j = 0; j <10;j++){
        printf("digite o valor da variavel %d do array b[10]",j);
        scanf("%d", &b[j]);}
    for(c = 0; c <10;c++){
        subt[c] =a[c] - b[c];
    printf("%d\n", subt[c]);}
    return 0;
}