#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "distanceofpositions.h"

struct ponto
{
    int x;
    int y;
};

int maindistanceofpositions()
{
    int resultado;
    struct ponto p1 = {0,0};
    printf("indique o valor da variavel x: ");
    scanf("%d", &p1.x);
    printf("indique o valor da variavel y: ");
    scanf("%d", &p1.y);
    resultado = (p1.x - 0) + (p1.y - 0);
    printf("%d", resultado);
    return 0;
}