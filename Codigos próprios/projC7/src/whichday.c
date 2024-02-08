#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "whichday.h"

enum semana {Domingo = 1, Segunda = 2, Terca =3, Quarta =4, Quinta = 5, Sexta =6, Sabado =7};
char diassemana[7][15] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};
int mainwhichday(){
    int num;
    printf("digite o numero do dia da semana que você quer usar: \n");
    scanf("%1d", &num);
    if(num < Domingo || num >Sabado){
        printf("dia inexistente\n");

    } else{
        printf(" o dia é %s\n", diassemana[num -1]);
    }
    return 0;
}