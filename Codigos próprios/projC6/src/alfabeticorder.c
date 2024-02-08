#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "alfabeticorder.h"

int mainalfabeticorder()
{
    int i, leng;
    char str1[leng], str2[leng];
    for (int i = 0; i < leng; i++)
    {
        str1[i] = '\0';
        str2[i] = '\0';
    }
    printf("Escreva uma string: ");
    scanf("%10s", str1);
    setbuf(stdin, NULL);
    printf("Escreva outra string: ");
    scanf("%10s", str2);
    setbuf(stdin, NULL);
    for (int i = 0; i < leng; i++)
        if (((str1[i] >= 65 && str1[i] <= 90) || (str1[i] >= 97 && str1[i] <= 122)) && ((str2[i] >= 65 && str2[i] <= 90) || (str2[i] >= 97 && str2[i] <= 122))){
            if (str1[i] == str2[i])
            {
                i++;
            }
            if (str1[i] < str2[i])
            {
            printf("%s ", str1);
            printf("%s", str2);
            break;
            }
            if (str1[i] > str2[i])
            {
            printf("%s ", str2);
            printf("%s", str1);
            break;
            }
        }
    return 0;
}