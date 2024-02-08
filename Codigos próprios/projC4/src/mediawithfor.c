#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mediawithfor.h"

int mainmediawithfor(){
    float c = 0,d = 0;
    for (float i = 0 ; i <= 1000 && d <= 10; i++){
        printf("digite o valor: ");
        scanf("%f", &i);
        c = (i + c);
        printf("%f ", c);
        d++;
        printf ("%f\n", d);
    }
    c = c / d;
    printf(" %f é a media do numero", c);
    printf("\n");
    return 0;
}