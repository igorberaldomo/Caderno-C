#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "distancepoints.h"

struct ponto {
    int x;
    int y;
};

int maindistancepoints()
{
    int resultado;
    struct ponto p1,p2 = {0,0};
    printf("indique o valor da variavel x do primeiro ponto: ");
    scanf("%d", &p1.x);
    printf("indique o valor da variavel y do primeiro ponto: ");
    scanf("%d", &p1.y);
     printf("indique o valor da variavel x do segundo ponto: ");
    scanf("%d", &p2.x);
    printf("indique o valor da variavel Y do segundo ponto: ");
    scanf("%d", &p2.y);
    resultado = (p1.x - p2.x) + (p1.y - p2.y);
    printf("%d", resultado);
    return 0;
}