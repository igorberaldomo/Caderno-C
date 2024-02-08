#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "struct.h"

struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};
int mainstruct(){
        struct cadastro c;
        strcpy(c.nome,"Carlos");
        c.idade = 18;
        strcpy(c.rua,"Avenida Brasil");
        c.numero = 1802;
    return 0;

}
