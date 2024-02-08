#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "switchvocal.h"

int mainswitchvocal()
{
    char str1[10];
    char letra;
    int i, vogais = 0, consoantes = 0, qtdletras;
    printf("escreva a primeira string: \n");
    scanf("%s", str1);
    setbuf(stdin,NULL);
    qtdletras = strlen(str1);
    for (i = 0; i < qtdletras; i++)
    {
        switch(str1[i]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            vogais++;
            break;
        default:
            consoantes++;
        }
    }
    printf("o char tem %d vogais\n", vogais);
    printf("digite a letra que ira substituir todas as vogais: \n");
    scanf("%c", &letra);
    setbuf(stdin,NULL);
    for (i = 0; i < qtdletras; i++)
        {
            switch(str1[i]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            str1[i] = letra;
            break;
        default:
            str1[i] = str1[i];
        }
    }
    for (i = 0; i < qtdletras; i++){
        printf("%c", str1[i]);
    }
    vogais = 0;
    for (i = 0; i < qtdletras; i++)
    {
        switch(str1[i]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            vogais++;
            break;
        default:
            consoantes++;
        }
    }
    printf("o char tem %d vogais\n", vogais);
    return 0;
}
