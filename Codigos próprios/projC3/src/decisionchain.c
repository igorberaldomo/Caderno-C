#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "decisionchain.h"

int maindecisionchain(){
    int x;
    printf("digite o numero a ser analizado: ");
    scanf("%d",&x);
    if (x == 10){
    printf("o numero é iqual a 10\n");
    }
        else {
            if (x > 10)
            printf("o numero é maior a 10\n");
            else
            printf("o numero é menor a 10\n");
    }
    system ("pause");
    return 0;
}