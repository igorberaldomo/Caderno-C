#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "toa.h"

int maintoa(){
    int a, b;
    printf("digite o valor de a: ");
    scanf("%d", &a);
    printf("digite o valor de b: ");
    scanf("%d", &b);
    while (a <= b){
        a = a + 1;
        if (a == 5)
            break;
    printf("%d\n", a);
    }
    system("pause");
    return 0;
}