#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "palindromo.h"

int mainpalindromo()
{
    char str1[15], str2[15];
    int i, n,fim;
    scanf("%s", str1);
    setbuf(stdin,NULL);
    printf("%lld\n", strlen(str1));
    fim = strlen(str1);
    for (i = fim - 1, n = 0; n < fim;i--, n++)
    {
        str2[n] = str1[i];
    }
    if(strcmp(str1,str2) == 0)
        printf("E um palindromo\n");
    else
        printf("NAO e um palindromo\n");
    return 0;
}