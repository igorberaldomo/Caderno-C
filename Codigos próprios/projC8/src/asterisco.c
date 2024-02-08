#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "asterisco.h"

int asterisco(int a){
    int i , u;
    for(i = 0; i < a;i++){
        for(u = 0; u <= i; u++){
            printf("*");
        }
        printf("\n");
    }
        for(u = 0; u <= i; u++){
            printf("*");
        }
        printf("\n");
    for(i = a; i >= 0;i--){
        for( u = 0; u <= i;u++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int mainasterisco(){
    int a = 0;
    printf("digite ate que numero você quer fazer a escada de '!'");
    scanf("%d", &a);
    asterisco(a);
    return 0;
}