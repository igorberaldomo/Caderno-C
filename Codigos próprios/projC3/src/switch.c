#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "switch.h"

int mainswitch(){
    char x;
    printf("digite um simbulo de pontuação: ");
    x = getchar();
    switch (x){
        case '.': printf("Ponto.\n"); break;
        case ',': printf("Virgula.\n"); break;
        case ';': printf("Dois pontos.\n"); break;
        case ':': printf("Ponto e virgula.\n"); break;
        default : printf("não é pontuação\n"); break;
    }
    system ("pause");
    return 0;
}