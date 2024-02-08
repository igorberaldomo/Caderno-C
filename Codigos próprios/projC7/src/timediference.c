#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "timediference.h"

struct date1{
    int dia;
    int mes;
    int ano;
};
struct date2{
    int dia;
    int mes;
    int ano;
};

int maintimediference(){
    struct date1 a;
    struct date2 b;
    int vdia, vmes, vano, diferenca;
    printf("digite o dia: \n");
    setbuf(stdin, NULL);
    scanf("%d", &a.dia);
    printf("digite o mes: \n");
    setbuf(stdin, NULL);
    scanf("%d", &a.mes);
    printf("digite o ano: \n");
    setbuf(stdin, NULL);
    scanf("%d", &a.ano);
    printf("segunda data: o dia: \n");
    setbuf(stdin, NULL);
    scanf("%d", &b.dia);
    printf("segunda data o mes \n");
    setbuf(stdin, NULL);
    scanf("%d", &b.mes);
    printf("segunda data o ano\n");
    setbuf(stdin, NULL);
    scanf("%d", &b.ano);
    
    vdia = a.dia - b.dia;
    vmes = a.mes - b.mes;
    vano = a.ano - b.ano;
    
    diferenca = vdia +(vmes*30)+ (vano*365);
    printf("a quantidade de dias entre data 1 e data 2 e |%d|",diferenca);
    return 0;


}