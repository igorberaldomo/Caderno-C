#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "arraysoma.h"

void conjsoma(int m[][10],int n){
int i=0, j = 0;
int soma = 0;
    for(i = 0;i < n;i++ ){
        for(j = 0;j < 10;j++ ){
            soma = soma + m[i][j];
        }
    }
    printf(" a soma de todos os numeros do array e %d", soma);
}

int mainarraysoma(){
    int a[10][10];
    int i = 0, j = 0;
    for(i = 0;i < 10;i++ ){
        for(j = 0;j < 10;j++ ){
            a[i][j] = 1;
        }
    }
    conjsoma(a,10);
    return 0;
}