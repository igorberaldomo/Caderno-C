#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "structalinhado.h"

struct endereco{
    char rua[50];
    int numero;
};
struct cadastro{
    char nome[50];
    int idade;
    struct endereco ender;
    
};
int mainstructalinhado(){
    struct cadastro c;
    printf("digite o nome cadastro: \n");
    fgets(c.nome,50,stdin);
    setbuf(stdin,NULL);
    printf("digite a idade cadastro: \n");
    scanf("%d", &c.idade);
    setbuf(stdin,NULL);
    printf("digite a rua cadastro: \n");
    fgets(c.ender.rua,50,stdin);
    setbuf(stdin,NULL);
    printf("digite o numero: \n");
    scanf("%d", &c.ender.numero);
    setbuf(stdin,NULL);
    printf("%s , %d ,%s , %d",c.nome, c.idade, c.ender.rua, c.ender.numero);
return 0;
}