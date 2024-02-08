#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "mediaalunos.h"


double mediaclasse(int nota[],int m){
    int soma = 0, i = 0;

    for(i = 0; i < m; i++){
    soma = soma + nota[i];
    }
    return (float)soma/(float)m;
}


int mainmediaalunos(){
    int nota[10] = {5,6,5,6,5,6,5,6,5,6};
    printf("digite o numero de alunos presentena amostra na classe: ");
    float s = mediaclasse(nota, 10);
    printf("a media do array e %f\n", s);
    return 0;
}