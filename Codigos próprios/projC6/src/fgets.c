#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fgets.h"

int mainfgets(){
    char nome[30];
    printf("digite um nome: \n");
    fgets(nome,30,stdin);
    printf("o nome digitado foi: %s\n",nome);
    return 0;
}