#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "menuselect.h"

int menu(){
    int i;
    do{
        printf("Escolha uma opção:\n");
        printf("(1) opcao Nº 1:\n");
        printf("(2) opcao Nº 2:\n");
        printf("(3) opcao Nº 3:\n");
        scanf("%d", &i);
    }while((i<1)||(i>3));
    return i;
}

int mainmenuselect(){
    int op = menu();
    printf("vc escolheu a opção %d\n", op);
    return 0;
}