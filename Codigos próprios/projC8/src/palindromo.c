#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "palindromo.h"

void palindromo(char stringp[], int n)
{
    char stringcont[50];
    int i, u;
    int iguais;
    for (i = n, u = 0; i > 0; i--, u++)
    {
        stringcont[u] = stringp[i];
    }
    iguais = strcmpi(stringp, stringcont);
    printf("/n%d/n", iguais);
    if (iguais == 0)
    {
        printf("essa palavra e um palindromo\n");
    }
    else
    {
            printf("essa palavra nao e um palindromo\n");
    }    
}

    int mainpalindromo()
    {
        char string[50];
        int n;
        printf("digite a palavra que vai ser checada caso e palindromo ou nao\n");
        gets(string);
        n = strlen(string);
        palindromo(string, n);
        return 0;
    }