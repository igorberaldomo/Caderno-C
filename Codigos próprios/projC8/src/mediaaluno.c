#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "mediaaluno.h"

float arritimedica(int matriz1[][3], int b)
{
    float resultado = 0;
    int i =0;
    int soma =0;
    for(i=0;i < 3;i++){
    soma = soma + matriz1[b][i];}
    resultado =  soma/3;
    return resultado;
}
float ponderada(int matriz2[][3], int b)
{
    float resultado;
    resultado = ((matriz2[b][0] * 5) + (matriz2[b][1] * 3) + (matriz2[b][2] * 2)) / 10;
    return resultado;
}

int mainmediaaluno()
{
    int i, u, aluno;
    char modo;
    float f =0;
    int matriz[3][3];
    for (i = 0; i < 3; i++)
    {
        for (u = 0; u < 3; u++)
        {
            printf("digite o valor da nota %d da prova %d\n", i + 1, u + 1);
            scanf("%d", &matriz[i][u]);
        }
    }
    printf(" digite o numero do aluno que você quer saber a media");
    scanf("%d", &aluno);
    setbuf(stdin,NULL);
    printf("\n digite o modo de media a ser feito");
    scanf("%c", &modo);
    setbuf(stdin,NULL);
    if (modo == 'a')
        f =arritimedica(matriz, aluno);
    if (modo == 'p')
        f =ponderada(matriz, aluno);
    printf("%f", f);
    return 0;
}