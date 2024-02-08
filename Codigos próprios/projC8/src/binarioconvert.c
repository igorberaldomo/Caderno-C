#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "binarioconvert.h"

int binario(int n){
    if(n == 0){
        return 1;
    }
    else{
        binario(n/2);
        printf("%d", n%2);
    }
    return 0;
}

int mainbinarioconvert(){
    int n = 0;
    printf("digite o numero a ser convertido a binario: ");
    scanf("%d", &n);
    binario(n);
    return 0;
}