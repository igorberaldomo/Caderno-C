#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "structmediaalunos.h"
struct classe{
    int matricula;
    char nome[20];
    int prova1;
    int prova2;
    int prova3;
};

double mediaestudante(int prova1, int prova2, int prova3){
    float resultado = 0;
    resultado  =  (prova1 +prova2 + prova3)/ 3;
    return (float)resultado;
}

void maiormediaestudante(struct classe C[],int n){
    float resultado = 0;
    float compaluno = 0;
    int compnumber = 0;
    char *compname[20];
    int i = 0;
    for(i = 0 ; i < n ;i++){
    resultado = mediaestudante( C[i].prova1,  C[i].prova2, C[i].prova3);
    if (compaluno > resultado){
        resultado = compaluno;
        compnumber = C[i].matricula;
        *compname = C[i].nome;
    }
    }
    printf(" o aluno %s da matricula %d teve a maior media %f",*compname, compnumber, resultado);
}


int mainstructmediaalunos(){
    int n = 0;
    int i = 0;
    printf(" digite o numero de alunos que classe terá: ");
    scanf("%d", &n);
    struct classe C[n];
    for(i = 0;i < n; i++){
    printf("digite o numero da matricula\n");
    scanf("%d", &C[i].matricula);
    printf("digite o nome do aluno: \n");
    fgets(C[i].nome,20,stdin);
    printf("digite a noda da prova 1\n");
    scanf("%d", &C[i].prova1);
    printf("digite a noda da prova 2\n");
    scanf("%d", &C[i].prova2);
    printf("digite a noda da prova 3\n");
    scanf("%d", &C[i].prova3);
    }
    maiormediaestudante(C,n);
    return 0;
}