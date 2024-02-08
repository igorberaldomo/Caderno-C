#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "maxtomin.h"
// 10) Escreva um programa que leia uma string do teclado e converta todos os seus
// caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está
// entre 97 e 122.
int mainmaxtomin()
{
    int leng = 0;
    char str[leng];
    printf(" tamanho %d\n", leng);
    printf("Escreva uma string até 10 caracteres: \n");
    scanf("%s", str);
    setbuf(stdin, NULL);
    int i;
    while (str[leng] != '\0')
    {
        leng++;
    }
    printf(" tamanho %d\n", leng);
    for (i = 0; i < leng; i++)
        printf("%c", str[i]);
    printf("\n");
    for (i = 0; i < leng; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
        { // caractere é maiusculo
            printf("%c", str[i] + 32);
        }
        else
        {
        printf("%c", str[i]);
    }
    return 0;
}