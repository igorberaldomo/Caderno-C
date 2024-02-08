#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "voidimprime.h"

void imprime(){
    printf("teste de função \n");
}

int mainvoidimprime(){
    imprime();
    imprime(5);
    imprime(5,'a');
    return 0; 
}