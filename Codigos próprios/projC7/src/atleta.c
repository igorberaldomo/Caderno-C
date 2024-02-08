#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "atleta.h"

struct ficha
{
    char nome[10];
    char categoria[10];
    int idade;
    float altura;
};

struct alto
{
    char nome[10];
    char categoria[10];
    int idade;
    float altura;
};

struct velho
{
    char nome[10];
    char categoria[10];
    int idade;
    float altura;
};

int mainatleta()
{
    int i, antigo = 0, big = 0;
    struct ficha f[5];
    struct alto a[1];
    struct velho v[1];
    v[0].idade = 0;
    a[0].altura = 0;
    for (i = 0; i < 5; i++)
    {
        printf("digite o nome cadastro nº %d: \n", i);
        setbuf(stdin, NULL);
        gets(f[i].nome);
        printf("digite o nome da categoria nº %d: \n", i);
        setbuf(stdin, NULL);
        gets(f[i].categoria);
        printf("digite a idade: \n");
        setbuf(stdin, NULL);
        scanf("%d", &f[i].idade);
        printf("digite a altura: \n");
        setbuf(stdin, NULL);
        scanf("%f", &f[i].altura);
        }
        for (i = 0; i < 5; i++){
        if (v[0].idade < f[i].idade)
        {
            v[0].idade = f[i].idade;
            antigo = i;
        }
        if (a[0].altura < f[i].altura)
        {
            a[0].altura = f[i].altura;
            big = i;
        }
    }
    printf(" o mais velho e %s na categoria %s com a idade %i e tem altura %f\n", f[antigo].nome, f[antigo].categoria, f[antigo].idade, f[antigo].altura);
    printf(" o mais alto e %s na categoria %s com a idade %i e tem altura %f\n", f[big].nome, f[big].categoria, f[big].idade, f[big].altura);
    return 0;
}