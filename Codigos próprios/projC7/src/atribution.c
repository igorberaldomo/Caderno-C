#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "atribution.h"
struct ponto {
    int x;
    int y;
};
struct ponto_novo{
    int x;
    int y;
};
int mainatribution(){
    struct ponto p1,p2 ={1,2};
    struct ponto_novo p3 = {3,4};
    p1 = p2;
    /* p1 = p3 não funciona pois p1 está em ponto e p3 em ponto novo
    printf("p1 = %d e %d", p1.x , p1.y)*/
    printf("p1 = %d e %d", p1.x, p1.y);
return 0;
}
