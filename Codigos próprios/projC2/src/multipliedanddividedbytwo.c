#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "multipliedanddividedbytwo.h"

int mainmultipliedanddividedbytwo(){
    int x, x2, x3;
    printf(" digite o numero a ser multiplicado e dividido por 2:\n" );
    scanf("%d", &x);
    x2= 2*x;
    printf("%d multiplicado por dois é %d\n", x, x2);
    x3 = x/2;
    printf("%d divido por dois é %d\n", x, x3);
    return 0;

}