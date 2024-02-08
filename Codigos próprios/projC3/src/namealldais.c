#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "namealldays.h"

int mainnamealldays(){
    char x;
    printf("digite o numero de um dia da semana ");
    x = getchar();
    switch (x){
        case '1': printf("Segunda\n"); 
        case '2': printf("Terça\n"); 
        case '3': printf("Quarta\n");
        case '4': printf("Quinta\n"); 
        case '5': printf("Sexta\n"); 
        case '6': printf("Sabado\n"); 
        case '7': printf("Domingo\n"); 
        default : printf("a semana só tem 7 dias\n"); 
    }
    system ("pause");
    return 0;
}