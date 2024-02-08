#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "whichmonth.h"

enum meses {janeiro = 1, fevereiro = 2 , março = 3, abril = 4, maio = 5, junho = 6, julho = 7, agosto = 8, setembro = 9, outubro = 10, novembro = 11, dezembro = 12};

char qualmes[12][15] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

int mainwhichmonth(){
    int num;
    printf("digite o numero do dia da semana que você quer usar: \n");
    scanf("%2d", &num);
    if(num < janeiro || num > dezembro){
        printf("não existe esse mes");
    }else{
        printf(" o  mes e %s", qualmes[num-1]);
    }
    return 0;
}