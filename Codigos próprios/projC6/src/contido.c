#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "contido.h"

int maincontido()
{
    int leng = 15;
    char str1[leng], str2[leng];
    for (int i = 0; i < leng; i++)
    {
        str1[i] = NULL;
        str2[i] = NULL;
    }
    printf("digite a primeira string: \n");
    scanf("%s", str1);
    setbuf(stdin,NULL);
    printf("digite a segunda string: \n");
    scanf("%s", str2);
    setbuf(stdin,NULL);
    char *pch;
    pch = strstr(str2, str1);
     if (pch != NULL)
        printf(" '%s' está contida em '%s'.\n", str1, str2);
        else
        printf(" '%s' não está contida em '%s'.\n", str1, str2);
    return 0;
}