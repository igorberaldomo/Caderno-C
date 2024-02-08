#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "addnumbers.h"

int mainaddnumbers(){
    int c = 0;
    for (int i = 0 ; i <= 10; i++){
        printf("digite o valor: ");
        scanf("%d", &i);
        c = i + c;
        printf("%d\n", c);
    }
    printf("\n");
    return 0;
}