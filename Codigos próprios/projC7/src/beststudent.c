#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "beststudent.h"

struct class
{
    char nome[50];
    int matricula;
    int prova1;
    int prova2;
    int prova3;
};

int mainbeststudent()
{
    int i, b, media, placeholder;
    struct class a[5];

    for (i = 0; i < 5; i++)
    {
        printf("digite o nome cadastro nº %d: \n", i);
        setbuf(stdin,NULL);
        gets(a[i].nome);
        printf("digite a matricula: \n");
        setbuf(stdin,NULL);
        scanf("%d", &a[i].matricula);
        printf("digite a prova 1: \n");
        setbuf(stdin,NULL);
        scanf("%d", &a[i].prova1);
        printf("digite a prova 2: \n");
        setbuf(stdin,NULL);
        scanf("%d", &a[i].prova2);
        printf("digite a prova 3: \n");
        setbuf(stdin,NULL);
        scanf("%d", &a[i].prova3);
        b = media;
            media = (a[i].prova1 + a[i].prova2 + a[i].prova3) / 3;
        if (media <= b)
        {
            printf(" media menor\n");
        }
        else
        {
            b = media;
            placeholder = i;
        }
    }
    for (i = placeholder;i < placeholder+1;i++)
    {
        printf("o nome do melhor aluno e %s\n", a[placeholder].nome);
        printf("a matricula do melhor aluno e %d\n", a[placeholder].matricula);
        printf("a nota da prova 1 do melhor aluno e %d\n", a[placeholder].prova1);
        printf("a nota da prova 2 do melhor aluno e %d\n", a[placeholder].prova2);
        printf("a nota da prova 3 do melhor aluno e %d\n", a[placeholder].prova3);
    }
    return 0;
}