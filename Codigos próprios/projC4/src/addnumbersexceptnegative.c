#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "addnumbersexceptnegative.h"

int mainaddnumbersexceptnegative(){
    int c = 0;
    for (int i = 0 ; i <= 10; i++){
        denovo:
        printf("digite o valor: ");
        scanf("%d", &i);
        if( i > 0){
        c = i + c;
        printf("%d\n", c);
        }
        else{
        goto denovo;
        }
    }
    printf("\n");
    return 0;
}