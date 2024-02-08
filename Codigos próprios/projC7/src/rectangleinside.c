#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "rectangleinside.h"

struct ponto
{
    float x;
    float y;
};
struct pontonovo
{
    float p;
    float q;
};

int mainrectangleinside()
{
    float resultado, diagonal, meio;
    float comp1, comp2, comp3, comp4;
    int t = 0;
    struct ponto p1, p2 = {0, 0};
    struct pontonovo p3, p4 = {0, 0};
    printf("indique o valor da variavel x do primeiro ponto: ");
    scanf("%f", &p1.x);
    printf("indique o valor da variavel y do primeiro ponto: ");
    scanf("%f", &p1.y);
    printf("indique o valor da variavel x do segundo ponto: ");
    scanf("%f", &p2.x);
    printf("indique o valor da variavel Y do segundo ponto: ");
    scanf("%f", &p2.y);
    printf("indique o valor da variavel x do primeiro ponto: ");
    scanf("%f", &p3.p);
    printf("indique o valor da variavel y do primeiro ponto: ");
    scanf("%f", &p3.q);
    printf("indique o valor da variavel x do segundo ponto: ");
    scanf("%f", &p4.p);
    printf("indique o valor da variavel Y do segundo ponto: ");
    scanf("%f", &p4.q);
    comp1 = p1.x - p3.p;
    comp2 = p1.y - p3.q;
    comp3 = p2.x - p4.p;
    comp4 = p2.x - p4.q;
    if (comp1 < 0)
    {
        printf("retangulo 2 esta abaixo de retangulo 1\n");
    }
    else
    {
        t++;
    }
    if (comp2 < 0)
    {
        printf("retangulo 2 esta a esquerda de retangulo 1\n ");
    }
    else
    {
        t++;
    }
    if (comp3 < 0)
    {
        printf("retangulo 2 esta acima de retangulo 1\n ");
    }
    else
    {
        t++;
    }
    if (comp4 < 0)
    {
        printf("retangulo 2 esta a direita de retangulo 1 \n");
    }
    else
    {
        t++;
    }
    meio = (((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));
    resultado = ((p1.x - p2.x) * 2 + ((p1.y - p2.y) * 2));
    if (meio < 0)
    {
        meio = meio * (-1);
    }
    else
    {
        diagonal = sqrt(meio);
    }
    if (resultado < 0)
    {
        resultado = resultado * (-1);
    }
    else
    {
        resultado = resultado;
    }
    if (t == 4)
    {
        printf("retangulo 2 esta dentro de retangulo 1\n");
    }
    else
    {
        printf("retangulo 2 NAO esta dentro de retangulo 1\n");
    }
    printf(" o perimetro e %f\n", resultado);
    printf(" a diagonal e %f\n", diagonal);
    return 0;
}