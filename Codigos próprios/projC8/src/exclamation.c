#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "exclamation.h"

int exclamation(int a){
    int i , u;
    for(i = 0; i < a;i++){
        for(u = 0; u <= i; u++){
            printf("!");
        }
        printf("\n");
    }
    return 0;
}

int mainexlcamation(){
    int a = 0;
    printf("digite ate que numero você quer fazer a escada de '!'");
    scanf("%d", &a);
    exclamation(a);
    return 0;
}