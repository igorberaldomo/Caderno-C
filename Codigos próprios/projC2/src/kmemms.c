#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "kmemms.h"

int mainkmemms(){
    int x, m;
    printf(" digite a velocidade em km/h\n");
    scanf("%d",&x);
    m = x/36;
    printf(" a velocidade em m/s é%d",m);
    return 0;


}