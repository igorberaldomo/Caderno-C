#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "anglesintoradians.h"

int mainanglesintoradians(){
    float radians, angles, pi;
    pi = 3.141592;
    printf("digite o numero de angulo a ser convertido em radiano\n");
    scanf( "%f", &angles);
    radians = angles * pi/180;
    printf(" fica %f em radiano\n", radians);
    return 0;
}