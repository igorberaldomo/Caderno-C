#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dividetheprize.h"

int maindevidetheprize(){
    float g1, g2, g3 ,prize;
    printf(" o premio é 780.000,00");
    prize = 780000;
    printf("o primeiro ganhou 46 porcento do total\n");
    g1 = prize * 0.46;
    printf(" o premio do primeiro é %f\n",g1);
    printf("o segundo ganhou 32 porcento do total\n");
    g2 = prize * 0.32;
    printf(" o premio do segundo é %f\n",g2);
    printf("o terceiro ganhou o resto\n");
    g3= prize - g1 -g2;
    printf(" o premio do terceiro é %f\n",g3);
    return 0;



}