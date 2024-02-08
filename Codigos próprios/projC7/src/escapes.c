#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "escapes.h"

enum escapes { retrocesso = '\b', tabulacao = '\t', novalinha = '\n'};
int mainescapes(){
    enum escapes e = novalinha;
    printf("Teste %c de %c escrita\n", e,e);
    e = tabulacao;
    printf("Teste %c de %c escrita\n", e,e);
    return 0;
}