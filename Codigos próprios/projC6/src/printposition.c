#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "printposition.h"

int mainprintposition()
{
    int i, leng, begin, end;
    char word[leng];
    for (i = 0; i < leng; i++)
    {
        word[i] = '\0';
    }
    printf("Escreva o string: \n");
    scanf("%s", word);
    setbuf(stdin, NULL);
    printf("escreva a posição para começar a imprimir: \n");
    scanf("%d", &begin);
    printf("escreva a posição para terminar a imprecao: \n");
    scanf("%d", &end);
    for (;begin < end; begin++){
        printf("%c", word[begin]);}
    return 0;
}