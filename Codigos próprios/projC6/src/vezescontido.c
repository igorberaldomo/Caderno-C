#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "vezescontido.h"

int mainvezescontido()
{
    int leng = 10;
    char str1[leng], str2[leng], str3[leng];
    for (int i = 0; i < leng; i++)
    {
        str1[i] = '\0';
        str2[i] = '\0';
        str3[i] = '\0';
    }
    printf("Escreva uma string até 10 caracteres: ");
    scanf("%10s", str1);
    setbuf(stdin, NULL);
    printf("Escreva a string a ser procurada na anterior: ");
    scanf("%10s", str2);
    setbuf(stdin, NULL);
    char *pch;
    pch = strstr(str1, str2); // procura o segundo string no primeiro string
    if (pch == NULL)
        printf(" '%s' não está contida em '%s'.\n", str2, str1);
    else
    {
        int n = strlen(str1);    // tamanho de str1
        long l1 = &str1;         // endereço de str1
        long l2 = pch;           // endereço de str2 dentro de str1
        long l3 = strlen(str2);  // tamanho de str2
        int pos1 = l2 - l1 + l3; // calculo do final de str2 dentro de str1
        int pos2 = 0;
        int count = 1;
        while (pos1 < str1)
        {
            for (int i = pos1; i < strlen(str1); i++) // começando no final onde o r foi encontrado
                str3[pos2++] = str1[i];            // faz uma copia de cada caractere para t
            str3[pos2] = '\0';                     // adiciona '\0' = NULL
            strcpy(str1, str3);                    // copia o string temporário  para o primeiro string
            pch = strstr(str1, str2);              // procura o segundo string no primeiro string denovo
            if (pch != '\0')
            {
                count++;
                l2 = pch;
                pos1 = l2 - l1 + l3; // calculo do novo final de r dentro de s
                pos2 = 0;
                for (int i = 0; i < leng; i++)
                    str3[i] = '\0';
            }
            else
                break;
        }
        printf(" '%s' encontrado %d vezes.\n", str2, count);
    }
    return 0;
}