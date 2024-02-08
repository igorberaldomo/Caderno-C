#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cleaningbuffer.h"

int maincleaningbuffer(){
    char nome[30];
    printf("digite um nome: \n");
    setbuf(stdin,NULL);
    fgets(nome,30,stdin);
    printf("o nome digitado foi: %s\n",nome);
    return 0;
}