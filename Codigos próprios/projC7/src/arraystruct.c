#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "arraystruct.h"

struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};
int mainarraystruct(){
        struct cadastro c[4];
        int i;
        for( i = 0; i < 4;i++){
        printf("digite o nome cadastro nº %d: \n", i);
        setbuf(stdin,NULL);
        gets(c[i].nome);
        printf("digite a idade cadastro nº %d: \n",i);
        scanf("%d", &c[i].idade);
        setbuf(stdin,NULL);
        printf("digite a rua cadastro nº %d: \n",i);
        gets(c[i].rua);
        printf("digite o numero: %d\n",i);
        scanf("%d", &c[i].numero);
        }
    return 0;
}