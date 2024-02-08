#include <stdlib.h>
#include<stdio.h>
#include "readnumberfnotation.h"

int mainreadnumberfnotation(){
    double x = 5.123456789e20;
    printf("'%10.2e'\n", x); /* entre o % e a letra (no caso e) você coloca o primeiro numero
representando a quantidade de caracters, um ponto final de separação, e um segundo número representando as casas decimais */                       
    printf("O numero foi lido\n");
    system ("Pause");
    return 0;
}
