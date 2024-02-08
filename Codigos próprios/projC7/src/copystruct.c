#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "copystruct.h"

struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};
int maincopystruct(){
    struct cadastro c[10] = {"carlos",18,"Avenida roxa",1011};
    c[1] = c[2];
    return 0;
    
}