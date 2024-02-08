#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "indirectarrayreturn.h"

// funções não podem retornar o array diretamente então o array deve ser parte da estrutura para que iso possa acontecer

struct vetor{
    int v[5];
};

struct vetor retorna_array(){
    struct vetor vet = {{1,2,3,4,5}};
    return vet;
};
int mainindirectarrayreturn(){
    int i;
    struct vetor vet = retorna_array();
    for(i = 0; i < 5; i++)
        printf("valores: %d\n", vet.v[i]);
    return 0;
}