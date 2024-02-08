#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "NOTASmyfirstarray.h"

int mainNOTASmyfirstarray(){
    int notas[100];
    int i;
    for(i = 1; i <100;i++){
        printf("digite a nota do aluno %d: ", i);
        scanf("%d", &notas[i]);
        }
    return 0;
}