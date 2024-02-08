#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dowhile.h"

int maindowhile(){
    int i;
    do {
        printf("Escolha uma opção\n");
        printf("(1) opção 1\n");
        printf("(2) opção 2\n");
        printf("(3) opção 3\n");
        scanf("%d", &i);
    } while ((i < 1) || (i > 3));
        printf("você escolheu a opção %d.\n",1);
        system("pause");
        return 0;
}