#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "rectanglesize.h"

struct ponto
{
    float x;
    float y;
};

int mainrectanglesize()
{
    float resultado, diagonal,meio;
    struct ponto p1,p2 = {0,0};
    printf("indique o valor da variavel x do primeiro ponto: ");
    scanf("%f", &p1.x);
    printf("indique o valor da variavel y do primeiro ponto: ");
    scanf("%f", &p1.y);
    printf("indique o valor da variavel x do segundo ponto: ");
    scanf("%f", &p2.x);
    printf("indique o valor da variavel Y do segundo ponto: ");
    scanf("%f", &p2.y);
    meio = (((p1.x - p2.x)*(p1.x - p2.x)) + ((p1.y - p2.y)*(p1.y - p2.y)));
    resultado = ((p1.x - p2.x)*2 + ((p1.y - p2.y)*2));
    if(meio < 0){
    meio= meio *(-1);}
    else{
    diagonal = sqrt(meio);}
    if(resultado < 0){
    resultado = resultado *(-1);}
    else{
    resultado = resultado;}
    printf(" o perimetro e %f\n", resultado);
    printf(" a diagonal e %f\n", diagonal);
    return 0;
}