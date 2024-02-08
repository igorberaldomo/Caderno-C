#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "somaimparesepares.h"

int parimpares(int array[], int m){
    int i =0;
    int somapar= 0;
    int somaimpar= 0;
    for( i = 0 ; i < m; i++){
        if(array[i]%2 == 0){
        somapar = somapar + array[i];
    }else{
        somaimpar = somaimpar + array[i];
    }}
    printf("pares = %d  impares = %d", somapar,somaimpar);
    return somapar/somaimpar;
}

int mainsomaimparesepares(){
    int array[10];
    int i = 0;
    for(i = 0; i < 10; i++){
        printf("digit o numero que vai ocupar a posicao %d: ", i+1);
        scanf("%d", &array[i]);
    }
    parimpares(array, 10);
    return 0;
}