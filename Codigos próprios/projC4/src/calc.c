#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"

int maincalc(){
    int  c = 0, b =1;
    printf("o calculo de 50 numeros pares consecutivos é ");
    for (int i = 0 ; i <= 50; i++){
        printf("%d %d\n", c, b);
        c += i *2;
        b++;
    }
    printf("\n");
    return 0;
}