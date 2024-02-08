#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "getsstruct.h"

struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};
int maingetsstruct(){
        struct cadastro c;
        printf("digite o nome: \n");
        gets(c.nome);
        printf("digite a idade: \n");
        scanf("%d", &c.idade);
        printf("digite a rua: \n");
        gets(c.rua);
        printf("digite o numero: \n");
        scanf("%d", &c.numero);
    return 0;
}