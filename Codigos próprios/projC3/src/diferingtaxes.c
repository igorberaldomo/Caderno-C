#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "diferingtaxes.h"

int maindiferingtaxes()
{
    char E;
    float pi ,pf;
    printf("bem vindo a calculadora de imposto automatica\n ");
    printf("digite em qual estado será realizada a compra conforme o exemplo:\n ");
    printf(" minas gerais 'm', São paulo 'p', rio de janeiro 'j', mato grosso do sul 's'\n ");
    printf("Em que estado será feito a venda?\n ");
    E = getchar();
    printf(" digite o preço inicial do produto: ");
    scanf("%f", &pi);
    switch (E){
    case 'm':{
        pf = pi * 1.07;
        printf("o preço final será %f", pf);
        
    }
    break;
        case 'p':{
         pf = pi * 1.12;
        printf("o preço final será %f", pf);
    }
    break;
    case 'j':{  
         pf = pi * 1.15;
        printf("o preço final será %f", pf);
    }
    break;
        case 's':{
        pf = pi * 1.08;
        printf("o preço final será %f", pf);
    }
    break;
    default : printf("não é possivel determinar o preço final\n");
}
    system("pause");
    return 0;
}